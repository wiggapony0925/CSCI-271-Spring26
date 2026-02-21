/*
Name: Jeffrey Fernandez
Course: CSCI 271
Assignment: Lessons 1–3 Homework
Due Date: Feb 25, 2026
*/

#include <iostream>

using namespace std;

int main() {
  double gpa;
  int satScore;
  int volunteerHours;

  // Ask for GPA
  cout << "Enter GPA: ";
  cin >> gpa;

  // Ask for SAT score
  cout << "Enter SAT score: ";
  cin >> satScore;

  // Ask for volunteer hours
  cout << "Enter volunteer hours: ";
  cin >> volunteerHours;

  // Determine eligibility
  if ((gpa >= 3.5 && satScore >= 1200) ||
      (gpa >= 3.8 && volunteerHours >= 100)) {
    cout << "Student qualifies for scholarship." << endl;
  } else {
    cout << "Student does not qualify." << endl;
  }

  return 0;
}
