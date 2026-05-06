class Solution {
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        queue<pair<int, int>>q;
        int land = 0;
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(grid[i][j] == 1){
                    land++;
                    q.push({i, j});
                }
            }
        }
        if(land == 0 || land == n*m) return -1;
        int dist = -1;
        while(!q.empty()){
            int size = q.size();
            dist++;

            while(size--){
                auto [i, j] = q.front();
                q.pop();
                
                for(int k = 0; k < 4; k++){
                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if(ni >=0 && nj >=0 && ni < n && nj < m && grid[ni][nj] == 0){
                        grid[ni][nj] = 1;
                        q.push({ni, nj});
                    }   
                }
            }
        }
        return dist;
    }
};