// 3. WAP to demonstrate for, while, do-while (with all possible variations),
// like for loop can be demonstrated without giving initialization in for
// construct or without giving increment in for construct.

// Sample:
// for (int i=0; i<10; i++)
// i=0

// for (; i<10; i++)
// i=0

// for (; i<10;)
// i++

#include <iostream>
using namespace std;

int main() {
  // For Loop
  cout << "\n------For Loop--------\n";
  cout << "a) Standard:\n";
  for (int i = 0; i < 5; i++) {
    cout << i << " ";
  }
  cout << "\n\n";

  cout << "b) Without initialization:\n";
  int j = 0;
  for (; j < 5; j++) {
    cout << j << " ";
  }
  cout << "\n\n";

  cout << "c) Without increment:\n";
  for (int k = 0; k < 5;) {
    cout << k << " ";
    k++;
  }
  cout << "\n\n";

  cout << "d) Without initialization and increment:\n";
  int l = 0;
  for (; l < 5;) {
    cout << l << " ";
    l++;
  }
  cout << "\n\n";

  //   While Loop
  cout << "------While Loop--------\n";
  int m = 0;
  while (m < 5) {
    cout << m << " ";
    m++;
  }
  cout << "\n\n";

  //   Do-While Loop
  cout << "------Do-While Loop--------\n";
  cout << "a) Standard:\n";
  int n = 0;
  do {
    cout << n << " ";
    n++;
  } while (n < 5);
  cout << "\n\n";

  cout << "b) Runs Once(But condition is false):\n";
  int x = 10;
  do {
    cout << x << " ";
    x++;
  } while (x < 5);
  cout << "\n";

  return 0;
}
