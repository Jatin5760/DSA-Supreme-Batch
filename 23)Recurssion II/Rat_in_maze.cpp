// #include <vector>
// #include <string>
// using namespace std;

// int row[4] = {-1, 1, 0, 0};
// int col[4] = {0, 0, -1, 1};
// string direction = "UDLR";

// bool valid(int i, int j, int n) {
//     return i >= 0 && j >= 0 && i < n && j < n;
// }

// void totalPath(vector<vector<int>>& mat, int i, int j, int n, string& path, vector<string>& ans, vector<vector<bool>>& visited) {
//     if (i == n - 1 && j == n - 1) {
//         ans.push_back(path);
//         return;
//     }

//     visited[i][j] = true;

//     for (int k = 0; k < 4; k++) {
//         int newRow = i + row[k];
//         int newCol = j + col[k];

//         if (valid(newRow, newCol, n) && mat[newRow][newCol] && !visited[newRow][newCol]) {
//             path.push_back(direction[k]);
//             totalPath(mat, newRow, newCol, n, path, ans, visited);
//             path.pop_back();
//         }
//     }

//     visited[i][j] = false;
// }

// vector<string> findPath(vector<vector<int>>& mat) {
//     int n = mat.size();
//     vector<string> ans;
//     if (n == 0 || mat[0][0] == 0 || mat[n - 1][n - 1] == 0) {
//         return ans;
//     }

//     vector<vector<bool>> visited(n, vector<bool>(n, false));
//     string path;
//     totalPath(mat, 0, 0, n, path, ans, visited);
//     return ans;
// }
