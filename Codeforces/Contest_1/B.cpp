#include <iostream>
#include <algorithm>

using namespace std;

void solve() {
    long long s, k, m;
    cin >> s >> k >> m;
    
    long long n = m / k;
    long long rem = m % k;
    
    if (s <= k) {
        if (rem == 0) {
            cout << s << "\n";
        } else {
            cout << max(0LL, s - rem) << "\n";
        }
    } else {
        if (n % 2 == 0) {
            cout << s - rem << "\n";
        } else {
            cout << k - rem << "\n";
        }
    }
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}