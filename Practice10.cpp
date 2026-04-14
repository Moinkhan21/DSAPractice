#include <iostream>
using namespace std;

// ======================================================================
// PROGRAM: Character Array Basics
// ----------------------------------------------------------------------
// PURPOSE:
//   Demonstrates declaration and usage of character arrays.
//
// CHARACTER ARRAY:
//   • Array of characters
//   • Each element stores a single character
//   • NOT necessarily a string unless null-terminated
// ======================================================================
int main() {

    // --------------------------------------------------
    // Character array declaration
    // --------------------------------------------------
    char arr[] = {'a', 'b', 'c'};

    // --------------------------------------------------
    // Printing elements individually
    // --------------------------------------------------
    cout << "Elements: ";
    for (int i = 0; i < 3; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}