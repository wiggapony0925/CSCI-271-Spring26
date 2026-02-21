/*
Name: Jeffrey Fernandez
Course: CSCI 271
Assignment: Lessons 1–3 Homework
Due Date: Feb 25, 2026
*/

#include <iomanip> // output input manipulators
#include <iostream>

using namespace std;

int main() {
  double grade1, grade2, grade3;
  double sum, average;

  // courses
  cout << "Enter grade 1: ";
  cin >> grade1;

  cout << "Enter grade 2: ";
  cin >> grade2;

  cout << "Enter grade 3: ";
  cin >> grade3;

  // sum and average
  sum = grade1 + grade2 + grade3;
  average = sum / 3.0;

  cout << fixed << setprecision(2);
  cout << "Average GPA: " << average << endl;

  return 0;
}
