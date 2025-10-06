// Develop a Donation Management System in C++ that efficiently manages
// the transfer of donations between accounts utilizing classes. The system
// consists of the following components: Donor Class contains private data
// members: string donor_name, double balance. Write the following
// functions in public section:
//  set_details(string name, double amount)
//  display()
//  double get_balance()
// Recipient Class contains the private data member: string recipient_name,
// double account_balance, double amount_required needed by the recipient
// and the following functions in public section:
//  set_details(string name, double balance, double amount)
//  display()
//  double get_balance()
// Additionally, the program includes the following function:
// transfer (Donor &donor, Recipient &recipient, double
// amount)
// This function facilitates the transfer of funds between a donor and a
// recipient. This function will verify whether the donor has sufficient funds
// for the transfer. If the donor has adequate funds, both the donor's and
// recipient's balances will be updated accordingly. Complete the program
// using the above-mentioned conditions.

#include <iostream>
using namespace std;

class Recipient;

class Donor {
  string donor_name;
  double donor_balance;

 public:
  void set_details(string n, double amt) {
    donor_name = n;
    donor_balance = amt;
  }

  void display() {
    cout << "\nDonor Name: " << donor_name << endl;
    cout << "Donor Balance: " << donor_balance << endl;
  }

  double getBalance() {
    return donor_balance;
  }

  friend void transfer(Donor& d, Recipient& r, double amount);
};

class Recipient {
  string recipient_name;
  double account_balance, amount_required;

 public:
  void set_details(string n, double bal, double amt) {
    recipient_name = n;
    account_balance = bal;
    amount_required = amt;
  }

  void display() {
    cout << "\nRecipient Name: " << recipient_name << endl;
    cout << "Account Balance: " << account_balance << endl;
    cout << "Amount Required: " << amount_required << endl;
  }

  double getBalance() {
    return account_balance;
  }

  friend void transfer(Donor& d, Recipient& r, double amount);
};

void transfer(Donor& d, Recipient& r, double amount) {
  if (d.getBalance() >= amount) {
    d.donor_balance -= amount;
    r.account_balance += amount;
    r.amount_required -= amount;

    if (r.amount_required < 0) {
      r.amount_required = 0;
    }

    cout << "Transfer Successful! Amount transferred: " << amount << endl;

  } else {
    cout << "Transfer Failed! Donor has insufficient funds." << endl;
  }
}

int main() {
  Donor d;
  Recipient r;

  d.set_details("Alice", 5000);
  r.set_details("Community Fund", 2000, 3000);

  cout << "=== Before Transfer ===" << endl;
  d.display();
  r.display();

  cout << "\nAttempting transfer of 2500..." << endl;
  transfer(d, r, 2500);

  cout << "\n=== After Transfer ===" << endl;
  d.display();
  r.display();

  return 0;
}