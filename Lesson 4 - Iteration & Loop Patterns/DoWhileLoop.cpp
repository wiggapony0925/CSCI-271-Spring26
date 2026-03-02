/*
Name: Jeffrey Fernandez
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Do-While Loop Example
Description: This program demonstrates the do while repetition statement,
printing the number 11 once before terminating as condition is false.
*/

#include <iostream>
using namespace std;

int main() {
  int number = 11;

  do {
    cout << number << " ";
    number++;
  } while (number <= 5);

  cout << endl;

  return 0;
}

/*
Reflection:
1. What I understood from this program:
do while is actually really new to me but i think i got the hang of it because
python doenst include this do while

2. Difficulties I faced:
none

3. What I needed to search or review:
the speed of do while its

4. AI Usage:
no ai

Did you verify the output?
yes

5. What I learned:
I learned that do while is used when you want to loop at least once it kinda of
does the action first then checks the condition
*/
