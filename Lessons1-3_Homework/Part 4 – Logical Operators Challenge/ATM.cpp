/*
Name: Jeffrey Fernandez
Course: CSCI 271
Assignment: Lessons 1–3 Homework
Due Date: Feb 25, 2026

Pseudocode section:
1. ask user for account balance
2. read balance
3. ask user for withrawal amount
4. read withdrawal amount
5. IF withdrawal > balance THEN
6.     Print "Insufficient funds"
7. ELSE
8.     balance = balance - withdrawal
9.     Print "New balance: $" + balance
10. END IF
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double balance, withdrawal;

  cout << "Enter account balance: $";
  cin >> balance;

  cout << "Enter withdrawal amount: $";
  cin >> withdrawal;

  if (withdrawal > balance) {
    cout << "Insufficient funds" << endl;
  } else if (withdrawal < 0) {
    cout << "Invalid withdrawal amount" << endl;
  } else {
    balance -= withdrawal;
    cout << fixed << setprecision(2);
    cout << "New balance: $" << balance << endl;
  }

  return 0;
}