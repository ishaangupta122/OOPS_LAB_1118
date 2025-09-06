// 1. Write a program(WAP) to display "Hello World" on console display.
// WAP to implement the following control characters:
// ‘\n’ is for new line, or you can use endl – cout<<endl<<“message”;
// ‘\t’ is for tab ;
// ‘\a’ is an alarm sound;
// ‘\r’ is carriage return to go to the beginning of the current line

#include <iostream>
using namespace std;

int main() {
  cout << "Hello World";
  cout << endl << "Shifted to new line....\n";
  cout << "Tab Space: " << 1 << "\t" << 2 << "\t" << endl;
  cout << "Alarm Sound: \a" << endl;
  cout << "Carriage Return (Original Statement): Hi, welcome....../rHello" << endl;
  cout << "Hi, BYE......\rHello";
  return 0;
}