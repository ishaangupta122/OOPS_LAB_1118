// 2. Write a C++ program that will ask for a temperature in Celsius and display
// it in degree Fahrenheit. [F=9C/5+32]

#include <iostream>
using namespace std;

int main() {
  float celsius = 0, fahrenheit = 0;

  cout << "Enter temperature in celsius: ";
  cin >> celsius;
  fahrenheit = (9 * celsius / 5 + 32);
  cout << celsius << "c in fahrenheit = " << fahrenheit << "F";

  return 0;
}