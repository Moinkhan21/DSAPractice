#include <iostream>
using namespace std;

bool findingNumberisPrime(int n) {

    if( n <= 1) return false;

    for(int i = 2; i < n; i++) {
        if((n % i) == 0) {
            return false;
        }
    }return true;
}

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;

    int isNumberPrime = findingNumberisPrime(n);

    if(isNumberPrime){
        cout << n << " Number is prime";
    }
    else {
        cout << n << " Number is not prime";
    }

    return 0;
}