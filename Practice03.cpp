#include <iostream>
using namespace std;

// ======================================================================
// FUNCTION: isOdd()
// ----------------------------------------------------------------------
// PURPOSE:
//   Determines whether a number is ODD using bitwise operator.
//
// CORE IDEA:
//   • Binary representation:
//       Even → last bit = 0
//       Odd  → last bit = 1
//
// BITWISE CHECK:
//   n & 1 → extracts last bit
//
// TIME COMPLEXITY: O(1)
// ======================================================================
bool isOdd(int n) {

    // If last bit is 1 → odd
    return (n & 1);
}

// ======================================================================
// MAIN FUNCTION
// ======================================================================
int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    if (isOdd(n)) {
        cout << "Number is Odd";
    }
    else {
        cout << "Number is Even";
    }

    return 0;
}