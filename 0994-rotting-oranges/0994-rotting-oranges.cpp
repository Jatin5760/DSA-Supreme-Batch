class Solution {
    int dx[4] = {-1,0,1,0};
    int dy[4] = {0,1,0,-1};
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        queue<pair<int, int> >q;
        int fresh = 0;
        
        for(int i = 0; i < grid.size(); i++){
            for(int j = 0; j < grid[0].size(); j++){
                if(grid[i][j] == 2){
                    q.push({i, j});
                }
                else if(grid[i][j] == 1){
                    fresh++;
                }
            }
        }
        if(fresh == 0) return 0;
        int ans = -1;
        while(!q.empty()){
            int size = q.size();            
            while(size--){
                auto [i, j] = q.front();
                q.pop();
                for(int k = 0; k < 4; k++){
                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if(ni>=0 && nj >=0 && ni < n && nj < m && grid[ni][nj] == 1){
                        grid[ni][nj] = 2;
                        fresh--;
                        q.push({ni, nj});
                    }
                }
            }
            ans++;
        }

        if(fresh > 0) return -1;
        return ans;
    }
};