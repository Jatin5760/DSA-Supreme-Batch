class Solution {
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
public:
    void dfs(vector<vector<int>>& image, int sr, int sc, int color, int prevColor){
        int n = image.size();
        int m = image[0].size();
        image[sr][sc] = color;
        for(int k = 0; k < 4; k++){
            int ni = sr + dx[k];
            int nj = sc + dy[k];

            if(ni >=0 && nj >= 0 && ni < n && nj < m && image[ni][nj] == prevColor){
                image[ni][nj] = color;
                dfs(image, ni, nj, color, prevColor);
            }
        }
    }
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int prevColor = image[sr][sc];
        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(image[sr][sc] != color){
                    image[sr][sc] = color;
                    dfs(image, sr, sc, color, prevColor);
                }
            }
        }
        return image;
    }
};