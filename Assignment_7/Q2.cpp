// 2. Define a class STRING and overload = = to compare two strings and + operator for
// concatenation of two strings.

#include <iostream>
using namespace std;

class STRING {
  string s;

 public:
  STRING(string str = "") : s(str) {};

  bool operator==(const STRING& obj) {
    return s == obj.s;
  }

  STRING operator+(const STRING& obj) {
    STRING temp;
    temp.s = s + obj.s;
    return temp;
  }

  void show() {
    cout << "\nSTRING CONCATENATION: " << s << "\n";
  }
};

int main() {
  STRING s1("ISHAAN"), s2("ISHAAN"), s3;

  s3 = s1 + s2;
  s3.show();

  cout << "STRING COMPARISION: " << ((s1 == s2) ? "EQUAL" : "NOT EQUAL !\n");

  return 0;
}