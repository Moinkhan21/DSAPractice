#include <iostream>
using namespace std;

int calculateAreaOfCircle(int r) {
  int areaOfCircle = 3.14*r*r;
  return areaOfCircle;
}

int main() {

  cout << "Enter size of radius: ";
  int r;
  cin >> r;

  int areaOfCircle = calculateAreaOfCircle(r);

  cout << "The area of circule is : " << areaOfCircle << endl;
  return 0;
}