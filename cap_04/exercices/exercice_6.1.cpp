/*
 *
 * Escribir una función que tenga un argumento de tipo entero y que devuelva la letra P 
 * si el número es positivo, y la letra N si es cero o negativo.
 *
 * Date: 04-01-2026
 * Programmer: Jose Alvarado
 * Github: https://github.com/jrag-dev
*/

#include <iostream>

using namespace std;


void showMenu();
void getNumber(int& num);
char negativeOrPositive(int num);
void printResult(int number, int resp);


int main(int argc, char *argv[])
{
  int number;
  char response;

  showMenu();

  getNumber(number);

  response = negativeOrPositive(number);

  printResult(number, response);
  
  return 0;
}


void showMenu()
{
  cout << "\n::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
  cout << ": Program: this program read an integer and print  :" << endl;
  cout << ": 'P' -> if this number is positive \t\t   :" << endl;
  cout << ": 'N' -> if this number is negative        \t   :" << endl;
  cout << "::::::::::::::::::::::::::::::::::::::::::::::::::::\n" << endl;
}

void getNumber(int& num)
{
  cout << "Enter an integer: ";
  cin >> num;
}

char negativeOrPositive(int num)
{
  char resp = 'N';

  if (num == 0)
    resp = 'F';

  if (num > 0)
    resp = 'P';

  return resp;
}

void printResult(int number, int resp)
{
  string result;
  
  result = resp == 'P' ? "a positive number" : (resp == 'N' ? "a negative number" : " a neutro number");
  cout << "\nThe number " << number << " is " << result << endl << endl;
}
