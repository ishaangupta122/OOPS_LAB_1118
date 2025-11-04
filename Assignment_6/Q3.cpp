// 3. Write a C++ program to compute area of right angle triangle, equilateral triangle, isosceles
// triangle using function overloading concept.

#include <cmath>
#include <iostream>

using namespace std;

// Right Angled Triangle
float area(float base, float height) {
  return 0.5 * base * height;
}

// Equilateral Triangle
float area(float side) {
  return (sqrt(3) / 4) * pow(side, 2);
}

// Isosceles Triangle
float area(float equalSide, float base, bool isIsosceles) {
  if (!isIsosceles) {
    return 0;
  }
  float height = sqrt(pow(equalSide, 2) - pow(base / 2, 2));
  return 0.5 * base * height;
}

int main() {
  float base, height, side, equalSide;

  cout << "\nArea Calculation Using Function Overloading: \n" << endl;

  cout << "Right Angled Triangle: " << endl;
  cout << "Enter base: ";
  cin >> base;
  cout << "Enter height: ";
  cin >> height;
  cout << "Area: " << area(base, height) << endl;

  cout << "\nEquilateral Triangle: " << endl;
  cout << "Enter side: ";
  cin >> side;
  cout << "Area: " << area(side) << endl;

  cout << "\nIsosceles Triangle: " << endl;
  cout << "Enter equal side: ";
  cin >> equalSide;
  cout << "Enter base: ";
  cin >> base;
  cout << "Area: " << area(equalSide, base, true) << endl;

  return 0;
}
