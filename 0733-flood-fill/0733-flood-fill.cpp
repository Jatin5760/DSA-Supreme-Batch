class Solution {
public:
    void dfs(vector<vector<int>>& image, int i, int j, int newColor, int ogColor){
        if(i < 0 || j < 0 || i >= image.size() || j >= image[0].size() || image[i][j] != ogColor){
            return;
        }

        image[i][j] = newColor;

        dfs(image, i-1, j, newColor, ogColor);
        dfs(image, i, j+1, newColor, ogColor);
        dfs(image, i+1, j, newColor, ogColor);
        dfs(image, i, j-1, newColor, ogColor);
    }

    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int ogColor = image[sr][sc];
        if(ogColor == color) return image; 

        dfs(image, sr, sc, color, ogColor);
        return image;
    }
};