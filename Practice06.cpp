#include <iostream>
using namespace std;

// ======================================================================
// FUNCTION: isPrime()
// ----------------------------------------------------------------------
// PURPOSE:
//   Checks whether a number is PRIME or NOT.
//
// PRIME NUMBER:
//   A number greater than 1 that has only 2 factors:
//   1 and itself.
//
// APPROACH:
//   • Check divisibility from 2 to √n
//   • If divisible → not prime
//
// TIME COMPLEXITY: O(√n)
// ======================================================================
bool isPrime(int n) {

    // --------------------------------------------------
    // Edge cases
    // --------------------------------------------------
    if (n <= 1)
        return false;

    // --------------------------------------------------
    // Check divisibility up to sqrt(n)
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
// ----------------------------------------------------------------------
// Prints all prime numbers from 2 to n
// ======================================================================
int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    cout << "Prime numbers up to " << n << ":\n";

    for (int i = 2; i <= n; i++) {

        if (isPrime(i)) {
            cout << i << " ";
        }
    }

    cout << endl;

    return 0;
}