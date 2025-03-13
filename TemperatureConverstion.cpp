#include <iostream>

int main() {

  double temp;
  char unit;

  std::cout << "F = Fahrenheit" << std::endl;
  std::cout << "C = Celius" << std::endl;
  std::cout << "What unit would you like to convert to?" << std::endl;

  std::cin >> unit;
  if(unit == 'F' || unit == 'f'){
    std::cout << "Enter the temperature in Celcius: ";
    std::cin >> temp;
    std::cout << "The temperature in Fahrenheit is: " << (1.8 * temp) + 32;
    
  } else if(unit == 'C' || unit == 'c'){
    std::cout << "Enter the temperature in Fahrenheit: ";
    std::cin >> temp;
    std::cout << "The temperature in Fahrenheit is: " << (temp - 32) / 1.8;
  } else{
    std::cout << "Please enter only C or F";
  }
  return 0;
}
