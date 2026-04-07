#include <iostream>
#include <vector>
using namespace std;

// ======================================================================
// FUNCTION: findingTemperature()
// ----------------------------------------------------------------------
// PURPOSE:
//   Converts temperature from Celsius to
//     • Kelvin
//     • Fahrenheit
//
// FORMULAS:
//
//   Kelvin     = Celsius + 273.15
//   Fahrenheit = Celsius × 1.8 + 32
//
// RETURN:
//   vector<double>
//     index 0 → Kelvin
//     index 1 → Fahrenheit
//
// TIME COMPLEXITY: O(1)
// ======================================================================
vector<double> findingTemperature(double celsius) {

    // Convert to Kelvin
    double kelvin = celsius + 273.15;

    // Convert to Fahrenheit
    double fahrenheit = celsius * 1.80 + 32.00;

    // Store results
    vector<double> result;
    result.push_back(kelvin);
    result.push_back(fahrenheit);

    return result;
}

// ======================================================================
// MAIN FUNCTION
// ======================================================================
int main() {

    double celsius;

    cout << "Enter temperature in Celsius: ";
    cin >> celsius;

    // Call conversion function
    vector<double> result = findingTemperature(celsius);

    // Output results
    cout << "Kelvin: " << result[0] << endl;
    cout << "Fahrenheit: " << result[1] << endl;

    return 0;
}