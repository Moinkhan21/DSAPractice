#include <iostream>
using namespace std;

int reverseTheNumber(int x) {
    int ans = 0;  // ✅ Initialize
    bool isNeg = false;

    if(x < 0) {
        isNeg = true;
        x = -x;
    }

    while(x > 0) {
        int digit = x % 10;
        ans = ans * 10 + digit;
        x = x / 10;
    }

    return isNeg ? -ans : ans;
}

int main() {
    cout << "Enter a number: ";
    int n;
    cin >> n;

    int reversed = reverseTheNumber(n);

    cout << "Reversed number is: " << reversed;

    return 0;
}