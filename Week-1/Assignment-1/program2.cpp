// Jeffrey Fernandez
// GPA Calculator

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  double g1, g2, g3;
  cout << "Enter three course grades (example: 3.7 3.3 4.0): ";
  if (!(cin >> g1 >> g2 >> g3)) {
    cerr << "Invalid input\n";
    return 1;
  }

  double avg = (g1 + g2 + g3) / 3.0;
  cout << fixed
       << setprecision(2); // basically fix tells the computer to display the
                           // decimal in a fixed way, and setprecision tells it
                           // how many decimal places to display
  cout << "Average GPA: " << avg << '\n';

  return 0;
}
