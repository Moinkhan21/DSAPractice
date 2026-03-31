#include <iostream>
using namespace std;

bool findingPrimeNumber(int n) {

    for(int i = 2; i < n; i++) {

        if(n % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;

   for(int i = 2; i <= n; i++) {
    bool isPrime = findingPrimeNumber(i);
    if(isPrime) {
        cout << i << " ";
    }
   }
    return 0;
}