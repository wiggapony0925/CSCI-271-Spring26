/*
Name: Jeffrey Fernandez
Course: CSCI 271
Assignment: Lessons 1–3 Homework
Due Date: Feb 25, 2026
*/

#include <iostream>
#include <string>

using namespace std;

int main() {
  int num;

  cout << "Enter an integer: ";
  cin >> num;

  // Determine positive/negative/zero
  string typeOfNum;
  if (num > 0) {
    typeOfNum = "positive";
  } else if (num < 0) {
    typeOfNum = "negative";
  } else {
    typeOfNum = "zero";
  }

  // Determine even/odd
  string isNumEvenOrOdd;
  if (num % 2 == 0) {
    isNumEvenOrOdd = "even";
  } else {
    isNumEvenOrOdd = "odd";
  }

  cout << "The number is " << typeOfNum << " and " << isNumEvenOrOdd << "."
       << endl;

  return 0;
}
