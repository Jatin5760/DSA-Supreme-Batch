#include <iostream>
#include <algorithm>
#include <cmath>

using namespace std;

void process_case() {
    long long total_apples, target_size;
    if (!(cin >> total_apples >> target_size)) return; 

    if (target_size > total_apples || target_size <= 0) {
        cout << -1 << "\n";
        return;
    }

    if (target_size == total_apples) {
        cout << 0 << "\n";
        return;
    }

    for (int divisions = 1; divisions <= 32; ++divisions) {
        long long num_piles = 1LL << divisions;
        
        long long small_pile_size = total_apples / num_piles;
        long long num_large_piles = total_apples % num_piles;

        if (small_pile_size == target_size) {
            cout << divisions << "\n";
            return;
        }
        
        if ((small_pile_size + 1) == target_size) {
            if (num_large_piles > 0) {
                cout << divisions << "\n";
                return;
            }
        }
        
        if (small_pile_size < target_size) {
            break;
        }
    }
    
    cout << -1 << "\n";
}

int main() {
    int test_cases;
    if (!(cin >> test_cases)) return 0;
    while (test_cases--) {
        process_case();
    }
    return 0;
}