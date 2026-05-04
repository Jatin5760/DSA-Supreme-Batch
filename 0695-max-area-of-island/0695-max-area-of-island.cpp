class Solution {
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
public:
    void dfs(vector<vector<int>>& grid, int i, int j, int& count){
        int n = grid.size();
        int m = grid[0].size();

        grid[i][j] = 0;
        count++;

        for(int k = 0; k < 4; k++){
            int ni = i + dx[k];
            int nj = j + dy[k];

            if(ni >=0 && nj >=0 && ni < n && nj < m && grid[ni][nj] == 1){
                dfs(grid, ni , nj, count);
            }
        }
    }
    int maxAreaOfIsland(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        int count = 0;
        int ans = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    count = 0; 
                    dfs(grid, i , j, count);
                    ans = max(ans, count);
                }
            }
        }
        return ans;
    }
};