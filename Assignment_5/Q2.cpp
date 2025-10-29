// 2. Write a program to define class X, Y and Z. Each class contains one character array as a data
// member. Using multiple inheritance, concatenate strings of class X and Y and store it in class Z.
// Using constructor and destructors, show all the three strings.

#include <iostream>
using namespace std;

class X {
 protected:
  char str1[50];

 public:
  X() {
    cout << "Enter first string: ";
    cin >> str1;
  }
  ~X() {
    cout << "Destructor of X called.\n";
  }
};

class Y {
 protected:
  char str2[50];

 public:
  Y() {
    cout << "Enter second string: ";
    cin >> str2;
  }
  ~Y() {
    cout << "Destructor of Y called.\n";
  }
};

class Z : public X, public Y {
  char str3[100];

 public:
  Z() {
    int i = 0, j = 0;

    while (str1[i] != '\0') {
      str3[i] = str1[i];
      i++;
    }

    while (str2[j] != '\0') {
      str3[i] = str2[j];
      i++;
      j++;
    }

    cout << "\nConcatenation Done!\n";
  }

  void show() {
    cout << "\nString 1: " << str1;
    cout << "\nString 2: " << str2;
    cout << "\nConcatenated String: " << str3 << endl;
  }

  ~Z() {
    cout << "Destructor of Z called.\n";
  }
};

int main() {
  Z obj;
  obj.show();

  return 0;
}
