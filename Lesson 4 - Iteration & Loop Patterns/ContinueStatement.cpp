/*
Name: Jeffrey Fernandez
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Continue Statement Example
Description: This program demonstrates the continue statement
*/

#include <iostream>
using namespace std;

int main() {
  for (int count = 1; count <= 10; ++count) {
    if (count == 5) {
      continue;
    }
    cout << count << " ";
  }

  return 0;
}

/*
Reflection:
1. What I understood from this program:
i understood everyting seemed really easy to read and understand

2. Difficulties I faced:
none
3. What I needed to search or review:
none

4. AI Usage:
- Did you use AI tools? If yes, explain how.
no AI use

- Did you verify the output?
yes

5. What I learned:
continue is used to skip an iteration and move on to the next one
*/
