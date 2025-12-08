/*
 *  El domingo de Pascua es el primer domingo después de la primera luna llena
 *  posterior al equinoccio de primavera, y se determina mediante el siguiente
 *  cálculo:
 *
 *  A = año mod 19
 *  B = año mod 4
 *  C = año mod 7
 *  D = (19*A + 24) mod 30
 *  E = (2 ∗ B + 4 ∗ C + 6 ∗ D + 5) mod 7
 *  N = (22 + D + E)
 *  donde N indica el número de día del mes de marzo (si N es igual o menor
 *  que 30) o abril (si es mayor que 31). Construir un programa que determine
 *  fechas de domingos de Pascua.
 */

#include <cmath>
#include <exception>
#include <ios>
#include <iostream>
#include <limits>
#include <ostream>
#include <regex>
#include <string>

// Constants of validation
const int MIN_YEAR = 1583;
const int MAX_YEAR = 4099;

// function declaration
int get_year();
int calculate_n(int year);
void show_sunday_of_pascua(int year, std::string fecha);
std::string get_sunday_pascua(int N);

int main() {
  int year;
  int N;

  // call to get year
  year = get_year();

  // call to calculate_n -> this function return the Sunday of Pascua
  N = calculate_n(year);

  std::cout << "N= " << N << std::endl;

  // call to show sunday of pascua
  show_sunday_of_pascua(year, get_sunday_pascua((N)));

  return 0;
}

int get_year() {
  std::string year_str;
  int temp_year;
  const std::regex regexIsYear("(1|2)\\d{3}");

  while (true) {
    std::cout << "Enter the year: ";

    if (!(std::cin >> year_str)) {
      std::cerr << "Input stream closed.\n";
      exit(1);
    }

    if (std::regex_match(year_str, regexIsYear)) {
      try {
        temp_year = std::stoi(year_str);

        if (temp_year >= MIN_YEAR && temp_year <= MAX_YEAR) {
          return temp_year;
        } else {
          std::cout << "Error: Year is outside the valid range (" << MIN_YEAR
                    << "-" << MAX_YEAR << ").\n";
        }

      } catch (const std::exception &e) {
        std::cout << "Error: Number conversion failed. Please try again.\n";
      }
    } else {
      std::cout << "Error: Invalid format. Please only digits.\n";
    }

    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
  }

  return temp_year;
}

void show_sunday_of_pascua(int year, std::string fecha) {
  std::cout << "\n+++++++++++++++++++++++++++++++++++++++++++++++++++++++++"
            << std::endl;
  std::cout << "+                                                       +"
            << std::endl;
  ;
  std::cout << "+  Easter Sunday for the year " << year << " was: " << fecha
            << "\t+" << std::endl;
  std::cout << "+                                                       +"
            << std::endl;
  std::cout << "+++++++++++++++++++++++++++++++++++++++++++++++++++++++++"
            << std::endl;
}

std::string get_sunday_pascua(int N) {
  std::string fecha;
  int day;
  std::string month;

  (N > 31) ? (day = N - 31, month = "April") : (day = N, month = "March");

  fecha.append(std::to_string(day) + " of " + month);

  return fecha;
}

int calculate_n(int year) {
  int A, B, C, D, E;
  int N;

  A = (year) % 19;
  B = (year) % 4;
  C = (year) % 7;
  D = (19 * A + 24) % 30;
  E = (2 * B + 4 * C + 6 * D + 5) % 7;

  N = (22 + D + E);

  return N;
}
