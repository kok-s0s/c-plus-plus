#include <iostream>
using namespace std;

int main() {
  int num1, num2;
  char op;

  cout << "Enter first number: ";
  cin >> num1;
  cout << "Enter operator: ";
  cin >> op;
  cout << "Enter second number: ";
  cin >> num2;

  if (op == '+') {
    cout << num1 << " + " << num2 << " = " << num1 + num2 << endl;
  } else if (op == '-') {
    cout << num1 << " - " << num2 << " = " << num1 - num2 << endl;
  } else if (op == '*') {
    cout << num1 << " * " << num2 << " = " << num1 * num2 << endl;
  } else if (op == '/') {
    cout << num1 << " / " << num2 << " = " << num1 / num2 << endl;
  } else {
    cout << "Invalid operator" << endl;
  }

  return 0;
}
