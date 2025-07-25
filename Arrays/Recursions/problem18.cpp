// Rat in a maze problem
#include <bits/stdc++.h>
using namespace std;

bool safetomove(vector<vector<int>> &maze, int n, int x, int y, vector<vector<int>> &visited)
{
    if ((x >= 0 && x < n) && (y >= 0 && y < n) && maze[x][y] == 1 && visited[x][y] == 0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void solve(vector<vector<int>> &maze, int n, int x, int y, vector<string> &ans, string path, vector<vector<int>> &visited)
{
    // base condition

    if (x == n - 1 && y == n - 1)
    {
        ans.push_back(path);
        return;
    }

    // up left down right
    visited[x][y] = 1;
    // down
    int newx = x + 1;
    int newy = y;
    if (safetomove(maze, n, newx, newy, visited))
    {
        path.push_back('D');
        solve(maze, n, newx, newy, ans, path, visited);
        path.pop_back();
    }

    // up
    newx = x - 1;
    newy = y;
    if (safetomove(maze, n, newx, newy, visited))
    {
        path.push_back('U');
        solve(maze, n, newx, newy, ans, path, visited);
        path.pop_back();
    }

    // right
    newx = x;
    newy = y + 1;
    if (safetomove(maze, n, newx, newy, visited))
    {
        path.push_back('R');
        solve(maze, n, newx, newy, ans, path, visited);
        path.pop_back();
    }

    // left
    newx = x;
    newy = y - 1;
    if (safetomove(maze, n, newx, newy, visited))
    {
        path.push_back('L');
        solve(maze, n, newx, newy, ans, path, visited);
        path.pop_back();
    }

    visited[x][y] = 0;
}

vector<string> ratInMaze(vector<vector<int>> &maze, int n)
{

    vector<string> ans;
    if (maze[0][0] == 0)
    {
        return ans;
    }
    vector<vector<int>> visited(n, vector<int>(n, 0));

    string path = "";

    solve(maze, n, 0, 0, ans, path, visited);

    sort(ans.begin(), ans.end());
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> maze(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> maze[i][j];
        }
    }

    vector<string> paths = ratInMaze(maze, n);
    if (paths.empty())
    {
        cout << "-1\n";
    }
    else
    {
        for (string s : paths)
        {
            cout << s << " ";
        }
        cout << endl;
    }
    return 0;
}