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
  // types of variables
  string firstname, lastName, major, school;
  int gradYear;

  // users input
  cout << "Enter your first name: ";
  cin >> firstname;

  cout << "Enter your last name: ";
  cin >> lastName;

  cout << "Enter your Major: ";
  cin >> major;
  getline(cin, major);

  cout << "Enter your school: ";
  cin >> school;
  getline(cin, school);

  cout << "Enter your Expected Graduation Year: ";
  cin >> gradYear;

  // output
  cout << "Welcome, " << firstname << " " << lastName << "!\n";
  cout << "Major: " << major << "\n";
  cout << "School: " << school << "\n";
  cout << "Graduation Year: " << gradYear << "\n";

  return 0;
}