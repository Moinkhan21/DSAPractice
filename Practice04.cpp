#include <iostream>
using namespace std;

// ======================================================================
// FUNCTION: findFactorial()
// ----------------------------------------------------------------------
// PURPOSE:
//   Calculates factorial of a given number using iteration.
//
// FACTORIAL DEFINITION:
//   n! = n × (n-1) × (n-2) × ... × 1
//
// EXAMPLES:
//   5! = 5 × 4 × 3 × 2 × 1 = 120
//   0! = 1
//
// APPROACH:
//   • Handle base cases (0! and 1!)
//   • Multiply numbers from 2 to n
//
// TIME COMPLEXITY: O(n)
// SPACE COMPLEXITY: O(1)
// ======================================================================
long long int findFactorial(int n) {

    // --------------------------------------------------
    // Edge case
    // --------------------------------------------------
    if (n == 0 || n == 1) {
        return 1;
    }

    // --------------------------------------------------
    // Iterative calculation
    // --------------------------------------------------
    long long int fact = 1;

    for (int i = 2; i <= n; i++) {
        fact = fact * i;
    }

    return fact;
}

// ======================================================================
// MAIN FUNCTION
// ======================================================================
int main() {

    int n;

    cout << "Enter the number: ";
    cin >> n;

    long long int result = findFactorial(n);

    cout << "Factorial of " << n << " is: " << result << endl;

    return 0;
}