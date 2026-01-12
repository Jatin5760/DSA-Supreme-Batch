#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

long long C[65][65];

void precompute() {
    for (int i = 0; i < 65; i++) {
        C[i][0] = 1;
        for (int j = 1; j <= i; j++) {
            C[i][j] = C[i - 1][j - 1] + C[i - 1][j];
        }
    }
}

void solve() {
    long long n, k;
    cin >> n >> k;

    int d = 0;
    long long temp = n;
    while (temp > 1) {
        temp >>= 1;
        d++;
    }

    long long ans = 0;

    if (d + 1 > k) {
        ans++;
    }

    for (int L = 1; L <= d; L++) {
        int bits = L - 1;
        int min_j = k - L + 1;
        
        int start = max(0, min_j);
        
        for (int j = start; j <= bits; j++) {
            ans += C[bits][j];
        }
    }

    cout << ans << "\n";
}

int main() {
    precompute();
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}