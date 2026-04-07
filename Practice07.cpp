#include <iostream>
using namespace std;

// ======================================================================
// FUNCTION: reverseTheNumber()
// ----------------------------------------------------------------------
// PURPOSE:
//   Reverses the digits of a given integer.
//
// EXAMPLE:
//   Input:  123 → Output: 321
//   Input: -456 → Output: -654
//
// APPROACH:
//   1. Handle negative numbers
//   2. Extract digits using modulo (%)
//   3. Build reversed number
//
// TIME COMPLEXITY: O(log₁₀ N)
// SPACE COMPLEXITY: O(1)
// ======================================================================
int reverseTheNumber(int x) {

    int ans = 0;
    bool isNeg = false;

    // --------------------------------------------------
    // Step 1: Handle negative numbers
    // --------------------------------------------------
    if (x < 0) {
        isNeg = true;
        x = -x;
    }

    // --------------------------------------------------
    // Step 2: Reverse digits
    // --------------------------------------------------
    while (x > 0) {

        int digit = x % 10;

        ans = ans * 10 + digit;

        x = x / 10;
    }

    // --------------------------------------------------
    // Step 3: Restore sign
    // --------------------------------------------------
    return isNeg ? -ans : ans;
}

// ======================================================================
// MAIN FUNCTION
// ======================================================================
int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    int reversed = reverseTheNumber(n);

    cout << "Reversed number is: " << reversed << endl;

    return 0;
}