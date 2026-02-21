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
  int length_strength = 8;

  string password;
  bool hasNumber = false;
  bool hasUpper = false;

  // Ask for password
  cout << "Enter a password: ";
  cin >> password;

  if (password.length() >= length_strength) {
    for (int i = 0; i < password.length(); i++) {
      if (password[i] >= '0' && password[i] <= '9') {
        hasNumber = true;
      }

      if (password[i] >= 'A' && password[i] <= 'Z') {
        hasUpper = true;
      }
    }
  }

  // Determine strength
  if (password.length() >= length_strength && hasNumber && hasUpper) {
    cout << "Strong Password" << endl;
  } else {
    cout << "Weak Password" << endl;
  }

  return 0;
}
