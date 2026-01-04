/*
 * Converts length from feet and inches to meters and centimeters and vice versa.
 *
 *        Date            Programmer
 *      27-12-2025      Jose Alvarado
*/
#include <iostream>
using namespace std;

const double CONVERSION = 2.54;
const int INCHES_IN_FOOT = 12;
const int CENTIMETERS_IN_METER = 100;

void showChoices();
void feetAndInchesToMeterAndCent(int f, int in, int& mt, int& ct);
void metersAndCentToFeetAndInches(int mt, int ct, int& f, int& in);

int main(int argc, char *argv[])
{
  int feet, inches;
  int meters, centimeters;
  int choice;

  do {
    showChoices();
    cin >> choice;
    cout << endl;

    switch (choice) {
      case 1:
        cout << "Enter feet and inches: ";
        cin >> feet >> inches;
        cout << endl;
        feetAndInchesToMeterAndCent(feet, inches, meters, centimeters);

        cout << feet << " feet(foot), " << inches << " inch(es) = "
          << meters << " meter(s), " << centimeters << " centimeter(s)." << endl;
        break;
      case 2:
        cout << "Enter meters and centimeters: ";
        cin >> meters >> centimeters;
        cout << endl;
        metersAndCentToFeetAndInches(meters, centimeters, feet, inches);

        cout << meters << " meter(s), " << centimeters << " centimeter(s) = "
             << feet << " feet(foot), " << inches << " inch(es)." << endl;
        break;
      case 99:
        break;
      default:
        cout << "Invalid input." << endl;
    }
  } while (choice != 99);
  
  return 0;
}

void showChoices() {
  cout << "\nEnter--" << endl;
  cout << "1: To convert from feet and inches to meters and centimeters." << endl;
  cout << "2: To convert from meters and centimeters to feet and inches." << endl;
  cout << "99: To quit the program." << endl;
}

void feetAndInchesToMeterAndCent(int f, int in, int& mt, int& ct)
{
  int inches;
  
  inches = f * INCHES_IN_FOOT + in;
  ct = static_cast<int> (inches * CONVERSION);
  mt = ct / CENTIMETERS_IN_METER;
  ct = ct % CENTIMETERS_IN_METER;
}

void metersAndCentToFeetAndInches(int mt, int ct, int& f, int& in)
{
  int centimeters;

  centimeters = mt * CENTIMETERS_IN_METER + ct;
  in = static_cast<int> (centimeters / CONVERSION);
  f = in / INCHES_IN_FOOT;
  in = in % INCHES_IN_FOOT;
}
