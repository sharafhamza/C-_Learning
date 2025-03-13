#include <iostream>

int main() {

  char op;
  double num1, num2;
  double result;

  std::cout << "Enter an operator (+, -, *, /) :";
  std::cin >> op;

  std::cout << "Enter number 1: ";
  std::cin >> num1;

  std::cout << "Enter number 2: ";
  std::cin >> num2;

  switch (op) {
  case '+':
    result = num1 + num2;
    std::cout << "Result: " << result;
    break;

  case '-':
    result = num1 - num2;
    std::cout << "Result: " << result;
    break;

  case '*':
    result = num1 * num2;
    std::cout << "Result: " << result;
    break;

  case '/':
    
    if (num2 == 0) {  // Prevent division by zero
      std::cout << "Error: Division by zero is not allowed.\n";
    } else {
      result = num1 / num2;
      std::cout << "Result: " << result;
    }

  default:
    std::cout << "Invalid operator";
    break;
  }

  return 0;
}
