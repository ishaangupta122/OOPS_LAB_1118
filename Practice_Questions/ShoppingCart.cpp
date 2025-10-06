#include <iostream>
using namespace std;

class ShoppingCart {
  int cart_id, item_count;
  string customer_name;

 public:
  ShoppingCart(int id, string name, int count) {
    cart_id = id;
    customer_name = name;
    item_count = count;
  }

  ~ShoppingCart() {
    cout << "Thank You, " << customer_name << endl;
  }

  void display_cart() {
    cout << "Cart ID: " << cart_id << endl;
    cout << "Customer Name: " << customer_name << endl;
    cout << "No. of items in cart: " << item_count << endl << endl;
  }
};

int main() {
  int n, c_items;
  string c_name;
  ShoppingCart** arr = new ShoppingCart*[n];

  cout << "\nEnter Mo. Of Shopping Carts: ";
  cin >> n;
  cout << endl;

  for (int i = 0; i < n; i++) {
    cout << "Enter Customer Name: ";
    cin >> c_name;
    cout << "Enter Items in Cart: ";
    cin >> c_items;
    cout << endl;
    arr[i] = new ShoppingCart(i + 1, c_name, c_items);
  }

  for (int i = 0; i < n; i++) {
    arr[i]->display_cart();
  }

  for (int i = 0; i < n; i++) {
    delete arr[i];
  }
  delete[] arr;

  return 0;
}
