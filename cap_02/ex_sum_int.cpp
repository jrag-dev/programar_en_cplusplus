#include <iostream>
using namespace std;

int sumIntegers(int num1, int num2) {
  int sum = num1 + num2;
  return sum;
}

double averageOfIntegers(int num1, int num2) {
  int sumOfIntegers = sumIntegers(num1, num2);
  double average = static_cast<double>(sumOfIntegers) / (2.0);
  return average;
}

int main() {
  /* Data dictionary */
  int num1;
  int num2;
  int resultOfSum;
  double resultOfAverage;

  // Prompt the user by num1 and num2
  cout << "Enter the value of num1: ";
  cin >> num1;

  cout << "Enter the value of num2: ";
  cin >> num2;

  // call to sumIntegers
  resultOfSum = sumIntegers(num1, num2);
  resultOfAverage = averageOfIntegers(num1, num2);

  // Show results
  cout << "\nThe sum of " << num1 << " + " << num2 << " = " << resultOfSum
       << endl;
  cout << "\nThe average of " << num1 << " y " << num2 << " = "
       << resultOfAverage << endl;

  return 0;
}
