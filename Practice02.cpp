#include <iostream>
using namespace std;

bool numberEvenorOdd(int n) {
    if(n % 2 == 0) {
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

    bool numberIsEven = numberEvenorOdd(n);

    if(numberIsEven) {
        cout << "The number is Even";
    }else {
        cout << "The number is Odd";
    }

    return 0;
}