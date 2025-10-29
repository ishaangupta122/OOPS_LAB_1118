// 1. Implement a C++ program to define three classes Alpha, Beta and Gamma, each class having
// private data members. Gamma is a class derived from Alpha and Beta (by applying multiple
// inheritance). Use constructors and destructors to read and display data.

#include <iostream>
using namespace std;

class Alpha {
  int a;

 public:
  Alpha() {
    cout << "Enter the int value of Alpha: ";
    cin >> a;
  }
  ~Alpha() {
    cout << "Destructor Alpha Called !\n";
  }
};

class Beta {
  int a;

 public:
  Beta() {
    cout << "Enter the int value of Beta: ";
    cin >> a;
  }
  ~Beta() {
    cout << "Destructor Beta Called !\n";
  }
};

class Gamma : public Alpha, public Beta {
  int a;

 public:
  Gamma() {
    cout << "Enter the int value of Gamma: ";
    cin >> a;
  }
  ~Gamma() {
    cout << "Destructor Gamma Called !\n";
  }
};

int main() {
  cout << "Calling Object of Gamma: " << endl;
  Gamma obj;

  cout << "Terminating !!!\n";

  return 0;
}