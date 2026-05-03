class Solution {
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
public:
    void solve(){
       
    }
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
       
        queue<pair<int, int>>q;
        int n = mat.size();
        int m = mat[0].size();
        vector<vector<int>> ans(n, vector<int>(m, INT_MAX));

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(mat[i][j] == 0){
                    q.push({i, j});
                    ans[i][j] = 0;
                }
            }
        }
        
        while(!q.empty()){
            int size = q.size();
            while(size--){
                auto [i, j] = q.front();
                q.pop();

                for(int k = 0; k < 4; k++){
                    int ni = i + dx[k];
                    int nj = j + dy[k];

                    if(ni >=0 && nj >= 0 && ni < n && nj < m && ans[ni][nj] == INT_MAX){
                        ans[ni][nj] = ans[i][j] + 1;
                        q.push({ni, nj});
                    }
                }
            }
        }
        return ans;
    }
};