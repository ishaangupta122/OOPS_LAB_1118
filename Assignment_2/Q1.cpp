// 1. Write a program to pass an object as an argument and return the object
// from a function.
// a. Use pass-by-value
// b. Use pass-by-address

#include <iostream>
using namespace std;

class Example {
 public:
  int val;

  void input(int a) {
    this->val = a;
  }

  void display() {
    cout << "Value = " << val << endl;
  }

  Example passByValSum(Example obj) {  // pass by value
    Example resultObject;
    resultObject.val = this->val + obj.val;
  }

  Example passByRefSum(Example& obj) {  // pass by reference
    Example resultObject;
    resultObject.val = this->val + obj.val;
  }
};

int main() {
  Example a, b, passByVal, passByRef;

  a.input(10);
  b.input(20);

  passByVal = a.passByValSum(b);
  passByVal.display();

  passByRef = a.passByValSum(b);
  passByRef.display();

  return 0;
}