class Solution {
    int dx[4] = {-1, 0, 1, 0};
    int dy[4] = {0, 1, 0, -1};
public:
    void dfs(vector<vector<char>>& board, int i, int j){
        int n = board.size();
        int m = board[0].size();

        board[i][j] = '#';

        for(int k = 0; k < 4; k++){
            int ni = i + dx[k];
            int nj = j + dy[k];

            if(ni >=0 && nj>=0 && ni < n && nj < m && board[ni][nj] == 'O'){
                dfs(board, ni, nj);
            }
        }
    }

    void solve(vector<vector<char>>& board) {
        int n = board.size();
        int m = board[0].size();

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if((i == 0 || i == n-1 || j == 0 || j == m-1) && board[i][j] == 'O'){
                    dfs(board, i , j);
                }
            }
        }

        for(int i = 0; i < n; i++){
            for(int j = 0; j < m; j++){
                if(board[i][j] == 'O'){
                    board[i][j] = 'X';
                }
                if(board[i][j] == '#'){
                    board[i][j] = 'O';
                }
            }
        }
    }
};