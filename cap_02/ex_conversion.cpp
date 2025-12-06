/**
 * @file ex_conversion.cpp
 * @brief Implementación de un programa lee el número de segundos y realiza las
 * conversiones, teniendo en cuenta que una semana tiene 7 días, un día tiene 24
 * horas, una hora 60 minutos, y un minuto 60 segundo
 *
 * @author José Alvarado
 * @date 2025-11-02
 */

#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
  int seconds;
  int semanas;
  int dias;
  int hours;
  int minutes;
  int acc;

  cout << "Enter the seconds: ";
  cin >> acc;

  seconds = acc % 60;
  acc = acc / 60;
  minutes = acc % 60;
  acc = acc / 60;
  hours = acc % 24;
  acc = acc / 24;
  dias = acc % 7;
  semanas = acc / 7;

  cout << "Seconds in weeks, days, hours, minutes and seconds " << endl;
  cout << " numero de semanas " << semanas << endl;
  cout << " numero de dias " << dias << endl;
  cout << " numero de horas " << hours << endl;
  cout << " numero de minutos " << minutes << endl;
  cout << " numero de segundos " << seconds << endl;

  return EXIT_SUCCESS;
}
