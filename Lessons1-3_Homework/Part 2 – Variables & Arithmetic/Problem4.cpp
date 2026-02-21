/*
Name: Jeffrey Fernandez
Course: CSCI 271
Assignment: Lessons 1–3 Homework
Due Date: Feb 25, 2026
*/

#include <iomanip>
#include <iostream>

using namespace std;

int main() {
  double billAmount, tipPercentage, tipAmount, totalBill, amountPerPerson;
  int numPeople;

  // bill amount
  cout << "Enter total bill amount: $";
  cin >> billAmount;

  // tip percentage
  cout << "Enter tip percentage (e.g., 15 for 15%): ";
  cin >> tipPercentage;

  // number of people
  cout << "Enter number of people splitting the bill: ";
  cin >> numPeople;

  // calculations
  tipAmount = billAmount * (tipPercentage / 100.0);
  totalBill = billAmount + tipAmount;

  // important because lets say there are 0 people u dont want to dive by 0
  if (numPeople > 0) {
    amountPerPerson = totalBill / numPeople;
  } else {
    amountPerPerson = totalBill;
  }

  cout << fixed << setprecision(2);
  cout << "\n--- Bill Summary ---\n";
  cout << "Tip amount: $" << tipAmount << "\n";
  cout << "Total bill: $" << totalBill << "\n";
  cout << "Amount per person: $" << amountPerPerson << "\n";

  return 0;
}
