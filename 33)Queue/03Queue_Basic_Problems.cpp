#include <iostream>
#include <queue>
using namespace std;

int main() {
    int arr[] = {3, 6, 2, 7, 8, 11};
    int n = 6;
    int k = 3;

    queue<int> q;

    // Step 1: push first (k-1) elements
    for (int i = 0; i < k - 1; i++) {
        q.push(arr[i]);
    }

    // Step 2: process from i = k-1 to n-1
    for (int i = k - 1; i < n; i++) {
        q.push(arr[i]); // add new element

        // print current window
        queue<int> temp = q;
        while (!temp.empty()) {
            cout << temp.front() << " ";
            temp.pop();
        }
        cout << endl;

        q.pop(); // remove oldest element
    }
}
