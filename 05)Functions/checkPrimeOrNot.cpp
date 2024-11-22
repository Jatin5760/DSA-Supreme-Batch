#include <iostream>
#include <cmath>

using namespace std;

int primeChecker(int n) {
    if (n <= 1) {
        return 0; // 0 and 1 are not prime
    }

    if (n == 2) {
        return 1; // 2 is a special case, it's prime
    }

    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            return 0; // Divisible by a number other than 1 and itself
        }
    }

    return 1; // Prime if not divisible by any number between 2 and sqrt(n)
}

int main() {
    int n;
    cout << "Enter the number: " << endl;
    cin >> n;

    if (primeChecker(n) == 1) {
        cout << "Number is prime: " << n << endl;
    } else {
        cout << "Number is composite: " << n << endl;
    }

    return 0;
}