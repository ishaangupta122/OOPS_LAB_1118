// 3. Write a program in C++ to create a class matrix and overload * operator using friend
// function to multiply two matrices.

#include <iostream>
using namespace std;

class Matrix {
  int a[3][3];

 public:
  Matrix() {
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        cin >> a[i][j];
      }
    }
  }

  void display() {
    for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
        cout << a[i][j] << " ";
      }
      cout << endl;
    }
  }

  friend void operator*(Matrix& m1, Matrix& m2);
};

void operator*(Matrix& m1, Matrix& m2) {
  Matrix temp;

  for (int i = 0; i < 3; i++) {
    for (int j = 0; j < 3; j++) {
      temp.a[i][j] = 0;
      for (int k = 0; k < 3; k++) {
        temp.a[i][j] += m1.a[i][k] * m2.a[k][j];
      }
    }
  }
}

int main() {
  cout << "\nEnter elements of first matrix:\n";
  Matrix m1;

  cout << "\nEnter elements of second matrix:\n";
  Matrix m2;

  cout << "\nFirst Matrix:\n";
  m1.display();

  cout << "\nSecond Matrix:\n";
  m2.display();

  cout << "\nMatrix after multiplication:\n";
  m1.display();

  return 0;
}
