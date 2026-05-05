class Solution {
    int dx[8] = {-1,-1,-1, 0,0, 1,1,1};
    int dy[8] = {-1, 0, 1,-1,1,-1,0,1};
public:
    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        queue<pair<int, int>>q;
        if(grid[0][0] == 0){
            grid[0][0] = 1;
            q.push({0, 0});
        }
        else{
            return -1;
        }
        
        int distance = 1;
        while(!q.empty()){
            int size = q.size();
            
            while(size--){
                auto [i, j] = q.front();
                q.pop();

                if(i == n-1 && j == n-1){
                    return distance;
                }

                for(int k = 0; k < 8; k++){
                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if(ni >= 0 && nj >= 0 && ni < n && nj < n && grid[ni][nj] == 0){
                        grid[ni][nj] = 1;
                        q.push({ni, nj});
                    }
                }

            }
            distance++;
        }
        return -1;
    }
};