// 4. Write a program to implement(a) pointer to an object(b) this pointer.
// Practice both ‘.’ (dot operator) and ‘->’ (arrow operator).

#include <iostream>
using namespace std;

class Simple {
  int x;

 public:
  void setX(int x) {
    this->x = x;  // Using this pointer
  }

  void print() {
    cout << "x = " << x << endl;
  }
};

int main() {
  Simple obj;

  Simple* ptr = &obj;

  obj.setX(5);
  obj.print();

  ptr->setX(10);
  ptr->print();

  return 0;
}
