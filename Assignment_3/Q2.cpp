// 2.	Redefine the above program by creating an array of objects of the class
// Rectangle and calculate area for each object calling different constructors.
// Also implement constructors with default arguments and destructor in this
// program.

#include <iostream>
using namespace std;

class Rectangle {
  float length, breadth;

public:
  Rectangle() {
    length = 0;
    breadth = 0;
    cout << "No Argument Constructor\n";
  }

  Rectangle(float lb) {
    length = lb;
    breadth = lb;
    cout << "One Argument Constructor\n";
  }

  Rectangle(float l, float b) {
    length = l;
    breadth = b;
    cout << "Two Argument Constructor\n\n";
  }

  float area() { return length * breadth; }

  void result() {
    cout << "Length of Rectangle: " << length << endl;
    cout << "Breadth of Rectanlge: " << breadth << endl;
    cout << "Area of Rectangle = " << area() << endl << endl;
  }

  ~Rectangle() { cout << "Destructor Called !\n"; }
};

int main() {
  Rectangle arr[] = {Rectangle(), Rectangle(5), Rectangle(3, 3)};

  for (int i = 0; i < 3; i++) {
    cout << "Rectangle " << (i + 1) << "\n";
    arr[i].result();
  }

  return 0;
}
