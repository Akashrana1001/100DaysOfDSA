#include <bits/stdc++.h>
using namespace std;

int dx[8] = {+2, +2, -2, -2, +1, +1, -1, -1};
int dy[8] = {+1, -1, +1, -1, +2, -2, +2, -2};

bool isSafe(int x, int y, int n, vector<vector<int>>& maze, vector<vector<int>>& visited) {
    return (x >= 0 && x < n && y >= 0 && y < n && 
            maze[x][y] == 1 && visited[x][y] == 0);
}

bool solve(int x, int y, int n, vector<vector<int>>& maze, vector<vector<int>>& visited, vector<pair<int, int>>& path){
    //base case
    if(x==n-1 && y==n-1){
        path.push_back({x,y});
        return true;
    }

    visited[x][y] = 1;
    path.push_back({x, y});

    for(int i=0;i<8;i++){
        int newx = x + dx[i];
        int newy = y + dy[i];
        if(isSafe(newx,newy,n,maze,visited)){
             if (solve(newx, newy, n, maze, visited, path)) {
                return true;
            }
        }
    }
    path.pop_back();
    visited[x][y] = 0;
    return false;

}

vector<pair<int, int>> knightPath(vector<vector<int>>& maze, int n){
    //base case
    vector<pair<int,int>> path;
    if(maze[0][0]==0){
        return path;
    }
    vector<vector<int>> visited(n, vector<int>(n,0));

   if (solve(0, 0, n, maze, visited, path)) {
        return path;
    }

    return {}; 
}

int main() {
    int n;
    cin >> n;
    vector<vector<int>> maze(n, vector<int>(n));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> maze[i][j];
        }
    }

    vector<pair<int, int>> path = knightPath(maze, n);

    if (path.empty()) {
        cout << "-1\n";
    } else {
        for (auto cell : path) {
            cout << "(" << cell.first << "," << cell.second << ") ";
        }
        cout << endl;
    }

    return 0;
}