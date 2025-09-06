// 8. Implement dynamic memory allocation. Use new and delete keywords.

#include <iostream>
using namespace std;

int main() {
  // Allocating Dynamic Memory
  int* ptr = new int;
  *ptr = 50;

  cout << "Value at ptr: " << *ptr << endl;

  // Free the allocated memory
  delete ptr;

  // Allocate dynmaic memory for an array
  int* arr = new int[5];
  for (int i = 0; i < 5; i++) {
    arr[i] = i + 1;
  }

  cout << "Array elements: ";
  for (int i = 0; i < 5; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  // Free the array memory
  delete[] arr;

  return 0;
}
