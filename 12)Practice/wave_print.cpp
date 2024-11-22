#include <iostream>
#include <vector>
using namespace std;

void wavePrint(const vector<vector<int>>& v) {
    // Check if the vector is empty to avoid out-of-bounds access
    if (v.empty() || v[0].empty()) return;

    int row = v.size();
    int col = v[0].size();

    for (int i = 0; i < col; i++) {
        if (i % 2 == 0) {
            // Print top to bottom in the current column
            for (int j = 0; j < row; j++) {
                cout << v[j][i] << " ";
            }
        } else {
            // Print bottom to top in the current column
            for (int j = row - 1; j >= 0; j--) {
                cout << v[j][i] << " ";
            }
        }
    }
    cout << endl; // To print a newline after the output
}

int main() {
    vector<vector<int>> v = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12},
        {13, 14, 15, 16}
    };

    wavePrint(v);

    return 0;
}
