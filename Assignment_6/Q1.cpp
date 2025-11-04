// 1. Class polygon contains data member width and height and public method set_value() to assign
// values to width and height. Class Rectangle and Triangle are inherited from polygon class. Both
// the classes contain public method calculate_area() to calculate the area of Rectangle and
// Triangle. Use base class pointer to access the derived class object and show the area calculated.

#include <iostream>
using namespace std;

class Polygon {
 protected:
  float width, height;

 public:
  void set_value(float w, float h) {
    width = w;
    height = h;
  }

  virtual float calculate_area() {
    return 0;
  }
};

class Rectangle : public Polygon {
 public:
  float calculate_area() override {
    return width * height;
  };
};

class Triangle : public Polygon {
 public:
  float calculate_area() override {
    return (1 / 2 * width * height);
  };
};

int main() {
  Polygon* shapes[2];
  Rectangle rect;
  Triangle tri;

  shapes[0] = &rect;
  shapes[1] = &tri;

  for (int i = 0; i < 2; i++) {
    float w, h;
    cout << "\nEnter Dimensions of Shape " << (i + 1) << ":\n";
    cout << "Enter Width (cm): ";
    cin >> w;

    cout << "Enter Height (cm): ";
    cin >> h;

    shapes[i]->set_value(w, h);
  }

  for (int i = 0; i < 2; i++) {
    cout << "Area of Shape " << (i + 1) << ": " << shapes[i]->calculate_area() << " cm" << endl;
  }

  return 0;
}