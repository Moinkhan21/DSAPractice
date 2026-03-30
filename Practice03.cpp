#include <iostream>
using namespace std;

bool numberEvenOrOdd(int n){

    if((n & 1) != 0) {
        return true;
    }
    else {
        return false;
    }
}

int main() {
    
    cout << "Enter a number: ";
    int n;
    cin >> n;

    bool numberIsOdd = numberEvenOrOdd(n);

    if(numberIsOdd) {
        cout << "Number is Odd";
    }
    else {
        cout << "Number is Even";
    }
    
    return 0;
}