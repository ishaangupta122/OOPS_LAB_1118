// 2. WAP using Array of Objects to display area of multiple rectangles.

#include <iostream>
using namespace std;

class Rectangle {
  float length, breadth;

 public:
  void input(float len, float bre) {
    this->length = len;
    this->breadth = bre;
  }

  float area() {
    return (2 * (length + breadth));
  }

  void display() {
    cout << area() << endl;
  }
};

int main() {
  float l, b;
  int n;

  cout << "\nEnter the No. of Rectangles: ";
  cin >> n;

  Rectangle rec[n];

  for (int i = 0; i < n; i++) {
    rec[i] = Rectangle();
    cout << "\nEnter Input for Rectangle " << (i + 1) << ":\n";
    cout << "Length" << ": ";
    cin >> l;
    cout << "Breadth" << ": ";
    cin >> b;
    rec[i].input(l, b);
  }

  for (int i = 0; i < n; i++) {
    cout << "\nArea of Rectangle " << (i + 1) << " = ";
    rec[i].display();
  }

  return 0;
}