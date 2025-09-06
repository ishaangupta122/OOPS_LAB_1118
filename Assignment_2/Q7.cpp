// Q7: Write a C++ program to declare const member function and attempt any
// operation within it.

#include <iostream>
using namespace std;

class Sample {
  int x;

 public:
  Sample(int val) {
    x = val;
  }

  void display() const {
    cout << "Value of x = " << x << endl;
  }  // cannot modify value of x
};

int main() {
  Sample s(42);
  s.display();

  return 0;
}
