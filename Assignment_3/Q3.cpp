// 3. Verify the following about destructor by writing the program:
// (i) Name should begin with tilde sign(~) and must match class name.
// (ii) There cannot be more than one destructor in a class.
// (iii) Destructors do not allow any parameter.
// (iv) They do not have any return type, just like constructors.When you do not specify any
// destructor in a class, compiler generates a default destructor and inserts it into your code.

#include <iostream>
using namespace std;

class Rectangle {
  float length, breadth;

 public:
  Rectangle() {
    length = 0;
    breadth = 0;
    cout << "No Argument\n";
  }

  Rectangle(float lb) {
    length = lb;
    breadth = lb;
    cout << "One Argument\n";
  }

  Rectangle(float l, float b) {
    length = l;
    breadth = b;
    cout << "Two Argument\n\n";
  }

  float area() {
    return length * breadth;
  }

  void result() {
    cout << "Length of Rectangle: " << length << endl;
    cout << "Breadth of Rectanlge: " << breadth << endl;
    cout << "Area of Rectangle = " << area() << endl << endl;
  }

  ~Rectangle() {
    cout << "Destructor Called !\n";
  }
};

int main() {
  Rectangle arr[] = {Rectangle(), Rectangle(5), Rectangle(3, 3)};

  for (int i = 0; i < 3; i++) {
    cout << "Rectangle " << (i + 1) << "\n";
    arr[i].result();
  }

  return 0;
}