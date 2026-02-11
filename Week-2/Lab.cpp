#include <iostream>
using namespace std;

// instructions: Write a C++ program that determines if a person can park in a
// special university parking area.

int main() {
  // vars
  string role;
  char hasPermit('n');
  int hour(0);

  cout << "Enter your role (student, faculty, visitor): ";
  cin >> role;

  cout << "Enter the current hour (0-23): ";
  cin >> hour;

  if (hour < 0 || hour > 23) {
    cout << "Invalid time entered." << endl;
    return 1;
  }

  if (role == "student") {
    cout << "Do you have a valid parking permit? (y/n): ";
    cin >> hasPermit;
  }

  if (role == "student" && hasPermit == 'y') {
    cout << "Access granted to student parking." << endl;
  } else if (role == "faculty") {
    cout << "Access granted to faculty parking." << endl;
  } else if (role == "visitor" && hour < 18) {
    cout << "Visitor parking allowed before 6 PM." << endl;
  } else {
    cout << "Parking access denied." << endl;
  }

  return 0;
}
