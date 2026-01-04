/*
 * Program illustrating how a value parameter works.
 *
 * value parameter -> not modified the actual parameter
 * reference parameter -> modified the value of the actual parameter
 *
*/


#include <iostream>
using namespace std;


void funcValueParam(int num);

int main(int argc, char *argv[])
{
  int number = 6;

  cout << "Line 2: BEfore calling the function "
       << "funcValueParam, number = " << number
       << endl;

  funcValueParam(number);

  cout << "Line 4: After calling the function "
       << "funcValueParam, number = " << number
       << endl;
  
  return 0;
}


void funcValueParam(int num) {
  cout << "Line 5: In the function funcValueParam, "
       << "before changing, num = " << num
       << endl;

  num += 10;

  cout << "Line 7: In the function funcValueParam, "
       << "after changing, num = " << num
       << endl;
}
