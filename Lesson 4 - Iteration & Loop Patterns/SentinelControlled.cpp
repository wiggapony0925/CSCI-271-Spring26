/*
Name: Jeffrey Fernandez
Course: CSCI 271
Lesson: Lesson 4 – Iteration & Loop Patterns
Program: Sentinel Class Average
Description: This program uses a sentine while loop to calculate the
The average of an number
*/

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  int total = 0;
  int counter = 0;

  cout << "Enter grade or -1 to quit: ";
  int grade;
  cin >> grade;

  while (grade != -1) {
    total += grade;
    counter++;

    cout << "Enter grade or -1 to quit: ";
    cin >> grade;
  }

  if (counter != 0) {
    double average = static_cast<double>(total) / counter;

    cout << "\nTotal of all " << counter << " grades entered is " << total
         << endl;
    cout << setprecision(2) << fixed;
    cout << "Class average is " << average << endl;
  } else {
    cout << "No grades were entered" << endl;
  }

  return 0;
}

/*
Reflection:
1. What I understood from this program:
what i undestood from this program is that you can use a sentinel value to

2. Difficulties I faced:
understanding the logic of the while loop

3. What I needed to search or review:
how t works

4. AI Usage:
helped me readn and understand the code more

- Did you verify the output?
yes
5. What I learned:
i learned that you can use a sentinel value to exit a loop
*/
