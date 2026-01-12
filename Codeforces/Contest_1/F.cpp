#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<vector<int>> graph;

int traverse(int node, int parent) {
    bool leaf_node = true;
    int acc_mask = 1;

    for (int neighbor : graph[node]) {
        if (neighbor == parent) continue;
        leaf_node = false;

        int sub_mask = traverse(neighbor, node);
        int temp_mask = 0;

        for (int i = 0; i < 3; i++) {
            if ((acc_mask >> i) & 1) {
                for (int j = 0; j < 3; j++) {
                    if ((sub_mask >> j) & 1) {
                        int rem_sum = (i + j) % 3;
                        temp_mask |= (1 << rem_sum);
                    }
                }
            }
        }
        acc_mask = temp_mask;
    }

    if (leaf_node) {
        return 2;
    }

    acc_mask |= 2;

    return acc_mask;
}

void run_case() {
    int v_count;
    cin >> v_count;

    graph.assign(v_count + 1, vector<int>());

    for (int i = 0; i < v_count - 1; i++) {
        int x, y;
        cin >> x >> y;
        graph[x].push_back(y);
        graph[y].push_back(x);
    }

    int total_mask = traverse(1, -1);

    if (total_mask & 1) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
}

int main() {
    int test_cases;
    cin >> test_cases;
    while (test_cases--) {
        run_case();
    }
    return 0;
}