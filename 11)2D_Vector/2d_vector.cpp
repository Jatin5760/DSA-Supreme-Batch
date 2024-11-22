#include <iostream>
#include <vector>
using namespace std;

int main() {
    // Declare a 2D vector
    vector<vector<int> > arr;

    // Declare and initialize 1D vectors
    vector<int> a = {1, 2, 3};
    vector<int> b = {4, 5, 6};
    vector<int> c = {7, 8, 9};

    // Push the 1D vectors into the 2D vector
    arr.push_back(a);
    arr.push_back(b);
    arr.push_back(c);
 
    // Print the 2D vector
    for (int i = 0; i < arr.size(); i++) {
        for (int j = 0; j < arr[i].size(); j++) {
            cout << arr[i][j] << " ";
        }    
        cout << endl;
    }

    return 0;
}
