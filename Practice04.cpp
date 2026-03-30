#include <iostream>
using namespace std;

// Function to calculate factorial
long long int findFactorial(int n) {

    // Base case
    if (n == 0 || n == 1) {
        return 1;
    }

    // Iterative calculation
    long long int fact = 1;

    for (int i = 2; i <= n; i++) {
        fact = fact * i;  // multiply with i
    }

    return fact;  // return after loop completes
}

int main() {

    cout << "Enter the number: ";

    int n;
    cin >> n;

    long long int factorialOfNumber = findFactorial(n);

    cout << "Factorial of number " << n << " is: " << factorialOfNumber << endl;

    return 0;
}