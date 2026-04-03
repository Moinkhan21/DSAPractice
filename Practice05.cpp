#include <iostream>
using namespace std;

// ======================================================================
// FUNCTION: isPrime()
// ----------------------------------------------------------------------
// PURPOSE:
//   Checks whether a given number is PRIME or NOT.
//
// PRIME NUMBER:
//   A number greater than 1 having exactly two factors:
//   1 and itself.
//
// APPROACH:
//   • Handle edge cases (n <= 1)
//   • Check divisibility from 2 to √n
//
// TIME COMPLEXITY: O(√n)
// ======================================================================
bool isPrime(int n) {

    // --------------------------------------------------
    // Edge case
    // --------------------------------------------------
    if (n <= 1)
        return false;

    // --------------------------------------------------
    // Optimized check till √n
    // --------------------------------------------------
    for (int i = 2; i * i <= n; i++) {

        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

// ======================================================================
// MAIN FUNCTION
// ======================================================================
int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    bool isNumberPrime = isPrime(n);

    if (isNumberPrime) {
        cout << n << " is a Prime Number";
    }
    else {
        cout << n << " is NOT a Prime Number";
    }

    return 0;
}