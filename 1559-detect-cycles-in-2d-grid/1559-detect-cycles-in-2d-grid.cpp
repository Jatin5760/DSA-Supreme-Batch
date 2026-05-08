class Solution {
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
public:
    bool dfs(vector<vector<char>>& grid, vector<vector<bool>>& visited, int i, int j, int parentRow, int parentCol){
        int n = grid.size();
        int m = grid[0].size();
        if(visited[i][j] == 1){
            return true;
        }
        visited[i][j] = 1; // Visited marked
        for(int k = 0; k < 4; k++){
            int ni = i + dx[k];
            int nj = j + dy[k];
            if(ni >=0 && nj >=0 && ni < n && nj < m && grid[ni][nj] == grid[i][j]){
                if(ni == parentRow && nj == parentCol){
                    continue;
                }
                if(dfs(grid, visited, ni, nj, i, j)){
                    return 1;
                }
            }
        }
        return 0;
    }

    bool containsCycle(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<bool>> visited(n, vector<bool>(m, false));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(!visited[i][j] && dfs(grid, visited, i, j, -1, -1)){
                    return 1;
                }
            }
        }
        return 0;
    }
};