// 3. Make a class named Fruit with a data member to calculate the number of fruits in a
// basket. Create two other class named Apples and Mangoes to calculate the number of apples and
// mangoes in the basket. Print the number of fruits of each type and the total number of fruits in
// the basket.

#include <iostream>
using namespace std;

class Fruit {
 protected:
  int totalFruits = 0;

 public:
  void addToTotal(int count) {
    totalFruits += count;
  }

  int getTotalFruits() {
    return totalFruits;
  }
};

class Apples : public Fruit {
 private:
  int appleCount;

 public:
  void input() {
    cout << "Enter number of apples: ";
    cin >> appleCount;
    addToTotal(appleCount);
  }

  void display() const {
    cout << "Number of Apples: " << appleCount << endl;
  }

  int getAppleCount() const {
    return appleCount;
  }
};

class Mangoes : public Fruit {
 private:
  int mangoCount;

 public:
  void input() {
    cout << "Enter number of mangoes: ";
    cin >> mangoCount;
    addToTotal(mangoCount);
  }

  void display() const {
    cout << "Number of Mangoes: " << mangoCount << endl;
  }

  int getMangoCount() const {
    return mangoCount;
  }
};

int main() {
  Apples a1;
  Mangoes m1;

  a1.input();
  m1.input();

  cout << "\n----Basket----\n";
  a1.display();
  m1.display();

  int totalFruits = a1.getAppleCount() + m1.getMangoCount();
  cout << "Total Fruits in Basket: " << totalFruits << endl;

  return 0;
}
