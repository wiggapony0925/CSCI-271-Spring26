// Jeffrey Fernandez
// Simple Calculator

#include <iomanip>
#include <iostream>
using namespace std;

int main() {
  char op;
  double num1, num2, result;

  cout << "Enter an operator (+, -, *, /): ";
  cin >> op;
  cout << "Enter two numbers: ";
  cin >> num1 >> num2;

  switch (op) {
  case '+':
    result = num1 + num2;
    break;
  case '-':
    result = num1 - num2;
    break;
  case '*':
    result = num1 * num2;
    break;
  case '/':
    if (num2 != 0) {
      result = num1 / num2;
    } else {
      cerr << "Error: Division by zero\n";
      return 1;
    }
    break;
  default:
    cerr << "Error: Invalid operator\n";
    return 1;
  }

  cout << fixed << setprecision(2);
  cout << "Result: " << result << '\n';

  return 0;
}
