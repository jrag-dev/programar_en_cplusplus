/**
 * @file exerc_3.2.cpp
 * @brief Implementación de un programa que acepte un año escrito en cifras
 * Escribir un programa que lea la hora de un día de nota-
 * ción de 24 horas y la respuesta en notación de 12 horas.
 * Por ejemplo, si la entrada es 13:45, la salida será:
 * 1: 45 PM
 *
 * @author José Alvarado
 * @date 2025-12-04
 * @Modified 2025-12-05
 */

#include <iostream>
#include <regex>
#include <string>
using namespace std;

/*
 * This function show the menu and return the correct format for the hour
 *  24-hour format
 */
string get_hour() {
  string hour_input;

  cout << "\n*******************************************" << endl;
  cout << "*\tEnter an hour in format HH:MM: ";
  cout << "\n*******************************************" << endl;

  while (true) {
    const std::regex regex12Hours("^([0-1][0-9]|2[0-3]):[0-5][0-9]$");

    cin >> hour_input;
    if (regex_match(hour_input, regex12Hours)) {
      return hour_input;
    }

    cout << "Enter a new hour with the format of 24 hours (HH:MM): ";
  }
}

int main() {

  string hour_input;
  string new_hour;
  string hour_12;
  string am_pm;

  // call get_hour
  hour_input = get_hour();

  string hour_string = hour_input.substr(0, 2);
  int hour = stoi(hour_input.substr(0, 2));
  string minuts = hour_input.substr(3, 2);

  int hour_rest = hour % 12;

  if (hour >= 12) {
    if (hour == 12) {
      hour_12 = hour_string;
    } else {
      hour_12 = to_string(hour_rest);
    }
    am_pm = "PM";
  } else {
    if (hour > 0 && hour < 12) {
      hour_12 = to_string(hour_rest);
    } else if (hour == 0) {
      hour_12 = to_string(12);
    }
    am_pm = "AM";
  }

  new_hour.append(hour_12 + ":");
  new_hour.append(minuts);
  new_hour.append(" " + am_pm);

  cout << "\n\nNew Hour: " << new_hour << endl;

  return 0;
}
