// 2. Write a C++ program to demonstrate example of hierarchical inheritance to get square and cube
// of a number.

#include <iostream>
using namespace std;

class Number {
 protected:
  int num;

 public:
  void getNumber() {
    cout << "\nEnter a number: ";
    cin >> num;
  }
};

// Derived class to calculate square
class Square : public Number {
 public:
  void calculateSquare() {
    cout << "Square of " << num << " is: " << (num * num) << endl;
  }
};

// Derived class to calculate cube
class Cube : public Number {
 public:
  void calculateCube() {
    cout << "Cube of " << num << " is: " << (num * num * num) << endl;
  }
};

int main() {
  Square sq;
  sq.getNumber();
  sq.calculateSquare();

  Cube cb;
  cb.getNumber();
  cb.calculateCube();

  return 0;
}
