// 1. Create a class named 'Rectangle' with two data members - length and breadth and a function to
// calculate the area which is '2*(length+breadth)'.The class has three constructors which are:

// (a) having no parameter - values of both length and breadth are assigned zero.
// (b) having two numbers as parameters - the two numbers are assigned as length and breadth
// respectively.
// (c) having one number as parameter - both length and breadth are assigned that number.

// Now, create objects of the 'Rectangle' class having none, one and two parameters and print their
// areas.

#include <iostream>
using namespace std;

class Rectangle {
  float length, breadth, count = 0;

 public:
  Rectangle() {
    length = 0;
    breadth = 0;
  }

  Rectangle(float l, float b) {
    length = l;
    breadth = b;
  }

  Rectangle(float lb) {
    length = lb;
    breadth = lb;
  }

  float area() {
    return length * breadth;
  }

  void result() {
    cout << "Rectangle " << count + 1 << endl;
    cout << "Length of Rectangle: " << length << endl;
    cout << "Breadth of Rectanlge: " << breadth << endl;
    cout << "Area of Rectangle = " << area() << endl << endl;
  }
};

int main() {
  Rectangle obj1;        // no parameter
  Rectangle obj2(4);     // one parameter
  Rectangle obj3(5, 2);  // two parameters

  obj1.result();
  obj2.result();
  obj3.result();

  return 0;
}