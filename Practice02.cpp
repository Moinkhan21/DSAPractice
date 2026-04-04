#include <iostream>
using namespace std;

// ======================================================================
// FUNCTION: isEven()
// ----------------------------------------------------------------------
// PURPOSE:
//   Checks whether a number is EVEN or ODD using modulus operator.
//
// CORE IDEA:
//   • Even → divisible by 2 → remainder = 0
//   • Odd  → remainder = 1
//
// EXPRESSION:
//   n % 2
//
// TIME COMPLEXITY: O(1)
// ======================================================================
bool isEven(int n) {

    // If remainder is 0 → even
    if (n % 2 == 0) {
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

    bool numberIsEven = isEven(n);

    if (numberIsEven) {
        cout << "The number is Even";
    }
    else {
        cout << "The number is Odd";
    }

    return 0;
}