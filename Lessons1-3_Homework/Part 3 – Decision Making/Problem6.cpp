/*
Name: Jeffrey Fernandez
Course: CSCI 271
Assignment: Lessons 1–3 Homework
Due Date: Feb 25, 2026
*/

#include <iostream>

using namespace std;

int main() {
  int grade;

  cout << "Enter a numeric grade (0-100): ";
  cin >> grade;

  if (grade < 0 || grade > 100) {
    cout << "Invalid grade entered." << endl;
  } else if (grade >= 90) {
    cout << "A" << endl;
  } else if (grade >= 80) {
    cout << "B" << endl;
  } else if (grade >= 70) {
    cout << "C" << endl;
  } else if (grade >= 60) {
    cout << "D" << endl;
  } else {
    cout << "F" << endl;
  }

  return 0;
}
