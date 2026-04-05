#include <iostream>
using namespace std;

// ======================================================================
// FUNCTION: calculateAreaOfCircle()
// ----------------------------------------------------------------------
// PURPOSE:
//   Calculates the area of a circle.
//
// FORMULA:
//   Area = π × r × r
//
// NOTE:
//   • Using double for better precision
//
// TIME COMPLEXITY: O(1)
// ======================================================================
double calculateAreaOfCircle(double r) {

    const double PI = 3.14159;   // Better precision

    return PI * r * r;
}

// ======================================================================
// MAIN FUNCTION
// ======================================================================
int main() {

    double r;

    cout << "Enter radius: ";
    cin >> r;

    double area = calculateAreaOfCircle(r);

    cout << "Area of circle is: " << area << endl;

    return 0;
}