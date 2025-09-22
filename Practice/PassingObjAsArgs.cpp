#include <iostream>
using namespace std;

class Book {
 public:
  string title;
  Book(string t) : title(t) {}

  void printTitle() const {
    cout << "Book: " << title << endl;
  }
};

void displayBookValue(Book b) {  // Pass by value (copy)
  b.printTitle();
}

void displayBookRefConst(const Book& b) {  // Pass by const reference (no copy, no modification)
  b.printTitle();
}

void displayBookRef(Book& b) {  // Pass by reference (no copy, but modification)
  b.title = "Hello";
  b.printTitle();
}

int main() {
  Book myBook("The C++ Journey");

  displayBookValue(myBook);  // Pass by value copies the object
  displayBookRefConst(myBook);
  displayBookRef(myBook);  // Efficient access without copying

  return 0;
}
