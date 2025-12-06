/**
 * @file exerc_3.1.cpp
 * @brief Implementación de un programa que acepte un año escrito en cifras
 * arábigas y visualize el año escrito en números romanos, dentro del
 * rango 1000 a 2100.
 *
 * @author José Alvarado
 * @date 2025-12-04
 */

#include <iostream>
#include <string>
using namespace std;

// Function that show menu and return a year in arabic cifras
int get_year() {
  int year;

  cout << "\n****************************************************************"
       << endl;
  cout << "* This program convert a number arabic between 1000 and 2100   *"
       << endl;
  cout << "****************************************************************\n"
       << endl;

  do {
    // Enter a date between 1000 and 2100
    cout << "Enter a date between 1000 and 2100: ";
    cin >> year;

  } while (year < 1000 || year > 2100);

  return year;
}

// Function that show the results
void show_result_in_roman_numbers(int year, string roman_year) {

  cout << "\nThe date " << year << " is written as: " << roman_year
       << " in roman numbers.\n"
       << endl;
}

int main() {
  int year;
  int q, q_m, q_d, q_c, q_l, q_x, q_v, q_i;
  int acc;
  string roman_year = "";

  // Call to get_year
  year = get_year();

  acc = year;
  q_m = acc / 1000;
  if (q_m >= 1) {
    acc = acc % 1000;
    q_m == 1 ? roman_year.append("M") : roman_year.append("MM");
  }

  q_d = acc / 500;
  if (q_d == 1 && acc % 500 == 0) {
    acc = acc % 500;
    roman_year.append("D");
  }

  q_c = acc / 100;
  if (q_c > 0) {
    acc = acc % 100;
    if (q_c == 1 && acc % 100 == 0) {
      roman_year.append("C");
    } else if (q_c > 0 && q_c <= 3) {
      q_c == 1
          ? roman_year.append("C")
          : (q_c == 2 ? roman_year.append("CC") : roman_year.append("CCC"));
    } else if (q_c == 4) {
      roman_year.append("CD");
    } else if (q_c == 5) {
      roman_year.append("D");
    } else if (q_c > 5 && q_c < 9) {
      q_c == 6
          ? roman_year.append("DC")
          : (q_c == 7 ? roman_year.append("DCC") : roman_year.append("DCCC"));
    } else if (q_c == 9) {
      roman_year.append("CM");
    }
  }

  q_l = acc / 50;
  if (q_l == 1 && acc % 50 == 0) {
    acc = acc % 50;
    roman_year.append("L");
  }

  q_x = acc / 10;
  if (q_x > 0) {
    acc = acc % 10;
    if (q_x == 1 && acc == 0) {
      roman_year.append("X");
    } else if (q_x > 0 && q_x < 4) {
      q_x == 1
          ? roman_year.append("X")
          : (q_x == 2 ? roman_year.append("XX") : roman_year.append("XXX"));
    } else if (q_x == 4) {
      roman_year.append("XL");
    } else if (q_x == 5) {
      roman_year.append("L");
    } else if (q_x > 5 && q_x < 9) {
      q_x == 6
          ? roman_year.append("LX")
          : (q_x == 7 ? roman_year.append("LXX") : roman_year.append("LXXX"));
    } else if (q_x == 9) {
      roman_year.append("XC");
    }
  }

  q_v = acc / 5;
  if (q_v == 1 && acc % 5 == 0) {
    acc = acc % 5;
    roman_year.append("V");
  }

  q_i = acc;
  if (q_i > 0) {
    acc = acc % 10;
    if (q_i == 1 && acc == 0) {
      roman_year.append("I");
    } else if (q_i > 0 && q_i < 4) {
      q_i == 1
          ? roman_year.append("I")
          : (q_i == 2 ? roman_year.append("II") : roman_year.append("III"));
    } else if (q_i == 4) {
      roman_year.append("IV");
    } else if (q_i == 5) {
      roman_year.append("V");
    } else if (q_i > 5 && q_i < 9) {
      q_i == 6
          ? roman_year.append("VI")
          : (q_i == 7 ? roman_year.append("VII") : roman_year.append("VIII"));
    } else if (q_i == 9) {
      roman_year.append("IX");
    }
  }

  // Call to show_result_in_roman_numbers for show the results
  show_result_in_roman_numbers(year, roman_year);

  return 0;
}
