/*
Name: Jeffrey Fernandez
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Counter-Controlled Class Average
Description: This program uses a counter controlled while loop to calculate the
average of 10 grades based on input
*/

#include <iostream>
using namespace std;

int main() {
  int total = 0;
  int counter = 1;

  while (counter <= 10) {
    int grade;
    cout << "Enter grade: ";
    cin >> grade;
    total += grade;
    counter++;
  }

  double average = static_cast<double>(total) / 10.0;

  cout << "\ntotal of all 10 grades is " << total << endl;
  cout << "average for entire class is " << average << endl;

  return 0;
}

/*
Reflection:
1. What I understood from this program:
I understood from this program that a counter controlled loop is used when you
know how many times you want to loop

2. Difficulties I faced:
none

3. What I needed to search or review:
none

4. AI Usage:
- Did you use AI tools?:
no AI use

- Did you verify the output?
yes i did

5. What I learned:
I learned that static_cast<double>() is used to convert an int to a double
*/
