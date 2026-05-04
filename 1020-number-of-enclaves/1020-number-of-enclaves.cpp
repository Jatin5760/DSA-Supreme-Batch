class Solution {
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
public:
    void dfs(vector<vector<int>>& grid, int i, int j){
        int n = grid.size();
        int m = grid[0].size();


        grid[i][j] = -1;

        for(int k = 0; k < 4; k++){
            int ni = i + dx[k];
            int nj = j + dy[k];

            if(ni >=0 && nj >= 0 && ni < n && nj < m && grid[ni][nj] == 1){
                dfs(grid, ni, nj);
            }
        }
    }
    int numEnclaves(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if((i == 0 || i == n-1 || j == 0 || j == m-1) && grid[i][j] == 1){
                    dfs(grid, i , j);
                }
            }
        }

        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    ans++;
                }
            }
        }
        return ans;
    }
};