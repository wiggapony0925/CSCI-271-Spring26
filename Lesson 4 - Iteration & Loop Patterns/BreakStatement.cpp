/*
Name: Jeffrey Fernandez
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Break Statement Example
Description: This program demonstrates the break statement exiting a for
statement early
*/

#include <iostream>
using namespace std;

int main() {
  int count;

  for (count = 1; count <= 10; ++count) {
    if (count == 3) {
      continue; // skip
    }

    if (count == 6) {
      break;
    }
    cout << count << " ";
  }

  cout << "\nBroke out of loop at count = " << count << endl;

  return 0;
}

/*
Reflection:
1. What I understood from this program:
From what I understood about this program, is that break is used to exit a loop
early and continue is used to skip an iteration

2. Difficulties I faced:
I didn't really face any difficulties in understanding this program


3. What I needed to search or review:
nothing

4. AI Usage:
- Did you use AI tools? If yes, explain how.
just to run my code because i forgot the command on mac to run a cpp file

- Did you verify the output?
yes

5. What I learned:
Break stops the loop completely and continue skips the current iteration and
moves to the next one
*/
