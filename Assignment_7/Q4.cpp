// 4. Overload '[]' to check array index out of bounds problem at run time.

#include <iostream>
using namespace std;

class Array {
 private:
  int arr[10];
  int size;

 public:
  Array() {
    size = 10;
    for (int i = 0; i < size; i++) {
      arr[i] = 0;
    }
  }

  int& operator[](int index) {
    if (index < 0 || index >= size) {
      throw "Index out of bounds!";
    }
    return arr[index];
  }
};

int main() {
  Array a;

  try {
    a[0] = 10;
    a[5] = 50;

    cout << "a[0] = " << a[0] << endl;
    cout << "a[5] = " << a[5] << endl;

    cout << "\nAccessing invalid index..." << endl;
    a[15] = 100;

  } catch (const char* msg) {
    cout << "Error: " << msg << endl;
  }

  return 0;
}
