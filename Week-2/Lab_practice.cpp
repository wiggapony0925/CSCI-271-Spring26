// compare two numbers

#include <iostream>
using namespace std;

int main() {
  // int a(0), b(0);
  // cout << "Enter two numbers: ";
  // cin >> a >> b;
  // if (a == b) {
  //     cout << "The numbers are equal" << endl;
  // } else if (a != b) {
  //     cout << "The numbers are not equal" << endl;
  // } else if (a < b) {
  //     cout << "The first number is less than the second number" << endl;
  // } else {
  //     cout << "The first number is greater than the second number" << endl;
  // }

  //   int grade = 0;

  //   cout << "Enter a grade: ";
  //   cin >> grade;

  //   if (grade >= 90 && grade <= 100) {
  //     cout << "A" << endl;
  //   } else if (grade >= 80 && grade < 90) {
  //     cout << "B" << endl;
  //   } else if (grade >= 70 && grade < 80) {
  //     cout << "C" << endl;
  //   } else if (grade >= 60 && grade < 70) {
  //     cout << "D" << endl;
  //   } else {
  //     cout << "F" << endl;
  //     cout << "study" << endl;
  //   }

  //   return 0;

  int age(0);
  char isStudent('n');

  cout << "Enter your age: ";
  cin >> age;
  cout << "Are you a student? (y/n): ";
  cin >> isStudent;

  bool isStudentBool(false);

  if (isStudent == 'y') {
    isStudentBool = true;
  } else {
    isStudentBool = false;
  }

  if (age >= 18 && isStudentBool) {
    cout << "You are a student and you are old enough to vote" << endl;
  } else if (age >= 18 && !isStudentBool) {
    cout << "You are not a student and you are old enough to vote" << endl;
  } else {
    cout << "You are not old enough to vote" << endl;
  }

  if (age < 12 || age >= 65) {
    cout << "You are not old enough to vote or you are too old to vote" << endl;
  } else {
    cout << "You are old enough to vote" << endl;
  }

  // NOT

  if (!isStudentBool) {
    cout << "You are not a student" << endl;
  }

  return 0;
}
