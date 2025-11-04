// 2. Write a program to create a class shape with functions area and display to find area and
// display the name of the shape and other essential component of the class. Create derived classes
// circle, rectangle and triangle each having overridden functions area and display. Write a program
// to find and display the area of circle, rectangle and triangle.

#include <cmath>
#include <iostream>

using namespace std;

class Shape {
 public:
  virtual double area() = 0;
  virtual void display() = 0;
};

class Circle : public Shape {
 private:
  double radius;

 public:
  Circle(double r) {
    radius = r;
  }

  double area() override {
    return M_PI * radius * radius;
  }

  void display() override {
    cout << "Shape: Circle" << endl;
    cout << "Radius: " << radius << endl;
    cout << "Area: " << area() << endl << endl;
  }
};

class Rectangle : public Shape {
 private:
  double length, breadth;

 public:
  Rectangle(double l, double b) {
    length = l;
    breadth = b;
  }

  double area() override {
    return length * breadth;
  }

  void display() override {
    cout << "Shape: Rectangle" << endl;
    cout << "Length: " << length << ", Breadth: " << breadth << endl;
    cout << "Area: " << area() << endl << endl;
  }
};

class Triangle : public Shape {
 private:
  double base, height;

 public:
  Triangle(double b, double h) {
    base = b;
    height = h;
  }

  double area() override {
    return 0.5 * base * height;
  }

  void display() override {
    cout << "Shape: Triangle" << endl;
    cout << "Base: " << base << ", Height: " << height << endl;
    cout << "Area: " << area() << endl << endl;
  }
};

int main() {
  Circle c(5);
  Rectangle r(10, 6);
  Triangle t(8, 4);

  c.display();
  r.display();
  t.display();

  return 0;
}
