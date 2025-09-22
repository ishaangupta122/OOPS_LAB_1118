#include <iostream>
using namespace std;

class Triangle {
  float base, height;

 public:
  //   Triangle();

  Triangle(float b, float h) : base(b), height(h) {}

  float calcArea() {
    float area = 0.5 * base * height;
    return area;
  }

  float compareArea(Triangle& t1, Triangle& t2) {
    if (t1.calcArea() > t2.calcArea()) {
      return t1.calcArea();
    } else {
      return t2.calcArea();
    }
  }
};

int main() {
  Triangle a(2, 5), b(3, 6), c(0, 0);

  cout << "Area of Triangle B: " << b.calcArea() << " cm sq." << endl;
  cout << "Area of Triangle A: " << a.calcArea() << " cm sq." << endl;
  cout << "Triangle with bigger area: " << c.compareArea(a, b) << " cm sq." << endl;
}