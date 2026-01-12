#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

struct UnionFind {
    vector<int> link;
    vector<long long> size;
    
    UnionFind(int n) {
        link.resize(n);
        iota(link.begin(), link.end(), 0);
        size.assign(n, 1);
    }
    
    int find(int i) {
        if (link[i] == i)
            return i;
        return link[i] = find(link[i]);
    }
    
    void merge(int i, int j, long long &total_pairs) {
        int root_i = find(i);
        int root_j = find(j);
        if (root_i != root_j) {
            
            total_pairs -= (size[root_i] * (size[root_i] + 1)) / 2;
            total_pairs -= (size[root_j] * (size[root_j] + 1)) / 2;
            
            
            link[root_j] = root_i;
            size[root_i] += size[root_j];
            
            
            total_pairs += (size[root_i] * (size[root_i] + 1)) / 2;
        }
    }
};

void run_case() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if (n == 0) return;

    
    vector<int> diffs(n - 1);
    
    vector<vector<int>> diff_locations(n + 1);
    
    for (int i = 0; i < n - 1; i++) {
        diffs[i] = abs(arr[i] - arr[i + 1]);
        if(diffs[i] < n + 1)
            diff_locations[diffs[i]].push_back(i);
    }

    UnionFind uf(n - 1);
    vector<bool> is_active(n - 1, false);
    long long current_total = 0;
    vector<long long> answers(n);

    
    for (int k = n - 1; k >= 1; k--) {
        for (int idx : diff_locations[k]) {
            is_active[idx] = true;
            current_total++; 
            
           
            if (idx > 0 && is_active[idx - 1]) {
                uf.merge(idx - 1, idx, current_total);
            }
            
            if (idx < n - 2 && is_active[idx + 1]) {
                uf.merge(idx, idx + 1, current_total);
            }
        }
        answers[k] = current_total;
    }

    for (int k = 1; k < n; k++) {
        cout << answers[k] << (k == n - 1 ? "" : " ");
    }
    cout << "\n";
}


int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        run_case();
    }
    return 0;
}