/*
*   Declarando punteros
*/

#include <iostream>

using namespace std;

char c;

int main(int argc, char const *argv[])
{
     char *pc;

     pc = &c;
     cout << endl;
     for (c = 'A'; c <= 'Z'; c++) {
          cout << *pc << " ";
     }
     cout << endl;

    return 0;
}
