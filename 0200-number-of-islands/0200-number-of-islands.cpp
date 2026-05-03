class Solution {
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
public:
    void solve(vector<vector<char>>& grid, int i, int j){
        int n = grid.size();
        int m = grid[0].size();

        grid[i][j] = '0'; // visited

        for(int k = 0; k < 4; k++){
            int ni = i + dx[k];
            int nj = j + dy[k];

            if(ni >= 0 && nj >= 0 && ni < n && nj < m && grid[ni][nj]== '1'){
                solve(grid, ni, nj);
            }
        }
    }

    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int count = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == '1'){
                    count++;
                    solve(grid, i, j);
                }
            }   
        }
       return count;
    }
};