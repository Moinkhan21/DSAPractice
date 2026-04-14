#include <iostream>
using namespace std;

// ======================================================================
// PROGRAM: Array Basics
// ----------------------------------------------------------------------
// PURPOSE:
//   Demonstrates declaration, initialization, and access of arrays.
//
// ARRAY:
//   • Collection of elements of SAME data type
//   • Stored in CONTIGUOUS memory locations
// ======================================================================
int main() {

    // --------------------------------------------------
    // Array Declaration + Initialization
    // --------------------------------------------------
    int arr[] = {1, 2, 3, 4, 5};

    // --------------------------------------------------
    // Accessing elements using index
    // --------------------------------------------------
    cout << "First element: " << arr[0] << endl;
    cout << "Last element: " << arr[4] << endl;

    // --------------------------------------------------
    // Printing all elements
    // --------------------------------------------------
    cout << "All elements: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}