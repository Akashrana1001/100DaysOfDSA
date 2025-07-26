#include <bits/stdc++.h>
using namespace std;

//path return karana hai 
// basically hame vector of pair return karana hai;;
bool safe(vector<vector<int>> grid,int n,int x,int y){
    if(x >= 0 && x < n && y >= 0 && y < n && grid[x][y] !=0){
                return true;
            }
            else{
                return false;
            }
}

bool solve(vector<vector<int>> grid,int n,vector<pair<int,int>> &path,int x,int y){
    //base case
    if(x==n-1 && y==n-1){
        path.push_back({x,y});
        return true;
    }

    //down and right
    int currentvalue=grid[x][y];


    path.push_back({x, y});
    for (int i = 1; i <= currentvalue; i++) {
        if (safe(grid, n, x + i, y)) {
            if (solve(grid, n, path, x + i, y)) return true;
        }
    }

    // Try all possible jumps in right direction
    for (int i = 1; i <= currentvalue; i++) {
        if (safe(grid, n, x, y + i)) {
            if (solve(grid, n, path, x, y + i)) return true;
        }
    }

    path.pop_back();
    return false;
}

 vector<pair<int, int>> FrogPath( vector<vector<int>> grid,int n){
    vector<pair<int,int>> path;
    if(grid[0][0]==0){
        return path;
    }
    
    if(solve(grid,n,path,0,0)){
        return path;
    }
    return {};
 }

int main() {
    int n;
    cin >> n;

    vector<vector<int>> grid(n, vector<int>(n));
    for (int i = 0; i < n; ++i){
        for (int j = 0; j < n; ++j){
            cin >> grid[i][j];
        }
    }

    vector<pair<int, int>> path = FrogPath(grid, n); // Your function

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
