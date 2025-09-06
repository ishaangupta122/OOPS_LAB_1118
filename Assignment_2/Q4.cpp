// Q4: Inline function to calculate the cube of a number

#include <iostream>
using namespace std;

inline int cube(int n) {
  return n * n * n;
}

int main() {
  int num;
  cout << "Enter a number to find its cube: ";
  cin >> num;

  cout << "Cube of " << num << " = " << cube(num) << endl;

  return 0;
}
