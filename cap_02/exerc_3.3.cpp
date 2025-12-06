/*
 * Escribir un programa que determine si un año es bisiesto. Un año es bisiesto
 * si es múltiplo de 4 (por ejemplo 1984). Sin embargo, los años múltiplos de
 * 100 sólo son bisiestos cuando a la v ez son múltiples de 400 (por ejemplo,
 * 1800 no es bisiesto, mientras que 2000 si lo es).
 */

#include <exception>
#include <iostream>
#include <regex>
#include <string>

int get_year() {
  std::string year_str;
  const std::regex regexYear("^\\d{4}");

  while (true) {

    std::cout << "Enter a year: ";
    std::cin >> year_str;

    if (std::regex_match(year_str, regexYear)) {

      try {
        return std::stoi(year_str);
      } catch (const std::exception &e) {
        std::cout << "Error converting to number. Try again.\n";
      }

    } else {
      std::cout << "Invalid format. You must be exactly 4 digits. Try again.\n";
    }
  }
}

int main() {
  int year;
  bool leap;

  year = get_year();

  leap = (year % 400 == 0) || ((year % 4 == 0) && (year % 100 != 0));

  std::string result =
      leap ? ("\nThis year " + std::to_string(year) + " is leap.")
           : ("\nThis year " + std::to_string(year) + " isn't leap.");

  std::cout << result << std::endl;

  return 0;
}
