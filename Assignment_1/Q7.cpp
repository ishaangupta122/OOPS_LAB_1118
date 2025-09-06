// 7. Define a class named Complex with properties(real and imaginary) and
// methods as per following details.

// void set() to initialize object values.
// void display() to display complex number.
// Complex sum(Complex) or void sum(Complex) to add two complex numbers(objects
// of Complex class) and return complex_number(object of Complex class) as
// result.

// Properties(real and imaginary) of the code should have private access
// modifier and member functions should have public access modifier in C++
// class.

#include <iostream>
using namespace std;

class Complex {
 private:
  float real, imaginary;

 public:
  void set(float r, float i) {
    real = r;
    imaginary = i;
  }

  void display() {
    cout << "Complex number: " << real << " + " << imaginary << "i" << endl;
  }

  Complex sum(const Complex& c) {  // pass by reference to avoid modification
    Complex temp;
    temp.real = real + c.real;
    temp.imaginary = imaginary + c.imaginary;
    return temp;
  }
};

int main() {
  Complex c1, c2, c3;
  float r, i;

  cout << "\n1st Complex Number:" << endl;
  cout << "Enter Real Part: ";
  cin >> r;
  cout << "Enter Imaginary Part: ";
  cin >> i;
  c1.set(r, i);

  cout << "\n2nd Complex Number:" << endl;
  cout << "Enter Real Part: ";
  cin >> r;
  cout << "Enter Imaginary Part: ";
  cin >> i;
  c2.set(r, i);

  c3 = c1.sum(c2);

  cout << "\n1st ";
  c1.display();
  cout << "2nd ";
  c2.display();
  cout << "Sum of (1st & 2nd) ";
  c3.display();

  return 0;
}