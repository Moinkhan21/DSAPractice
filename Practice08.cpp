#include <iostream>
#include <vector>
using namespace std;

vector<double> findingTempurater(double celsius) {
 
    double k = celsius + 273.15;
    double f = celsius * 1.80 + 32.00;

    vector<double> v;
    v.push_back(k);
    v.push_back(f);
    return v;
}

int main() {

    cout << "Enter temperature in Celsius: ";
    double c;
    cin >> c;

    vector<double> result = findingTempurater(c);

    cout << "Kelvin: " << result[0] << endl;
    cout << "Fahrenheit: " << result[1] << endl;

    return 0;
}