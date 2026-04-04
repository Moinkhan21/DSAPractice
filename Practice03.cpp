#include <iostream>
using namespace std;

// ======================================================================
// FUNCTION: isOdd()
// ----------------------------------------------------------------------
// PURPOSE:
//   Checks whether a number is ODD or EVEN using bitwise operator.
//
// CORE IDEA:
//   • Last bit of a number determines odd/even
//       - Even → last bit = 0
//       - Odd  → last bit = 1
//
// BITWISE OPERATION:
//   n & 1
//     → checks last bit
//
// TIME COMPLEXITY: O(1)
// ======================================================================
bool isOdd(int n) {

    // If last bit is 1 → odd
    if ((n & 1) != 0) {
        return true;
    }

    return false;
}

// ======================================================================
// MAIN FUNCTION
// ======================================================================
int main() {

    int n;

    cout << "Enter a number: ";
    cin >> n;

    bool numberIsOdd = isOdd(n);

    if (numberIsOdd) {
        cout << "Number is Odd";
    }
    else {
        cout << "Number is Even";
    }

    return 0;
}