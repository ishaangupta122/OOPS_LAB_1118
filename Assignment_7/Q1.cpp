// 1. Create a class Time with three private variables int h,m,s;
// Create a function to overload ‘+’ operator to add two time variables.

#include <iostream>
using namespace std;

class Time {
  int s, m, h;

 public:
  Time(int hrs = 0, int min = 0, int secs = 0) {
    h = hrs;
    m = min;
    s = secs;
  }

  Time& operator+(const Time& obj) {
    Time temp;
    temp.s = s + obj.s;
    temp.m = m + obj.m;
    temp.h = h + obj.h;

    // Convert into minutes
    if (temp.s >= 60) {
      temp.m += temp.s / 60;
      temp.s = temp.s % 60;
    }

    // Convert into hours
    if (temp.m >= 60) {
      temp.h += temp.m / 60;
      temp.m = temp.m % 60;
    }

    return temp;
  }

  void show() {
    cout << "Displaying Time:\n";
    cout << h << " Hrs - " << m << " Mins - " << s << " Secs\n";
  }
};

int main() {
  Time t1(5, 15, 34);
  Time t2(9, 53, 58);
  Time t3 = t1 + t2;

  t3.show();
  return 0;
}
