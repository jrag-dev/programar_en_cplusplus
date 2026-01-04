/*
 * Realizar un bucle que itera hasta que se introduzca s o n
 *
*/

#include <iostream>
#include <cstdlib>
using namespace std;


int main(int argc, char *argv[])
{
  char resp;

  do {
    cout << " \nIntroduzca S = Si, o N = No? ";
    cin >> resp;

    if (isalpha(resp)) {
      resp = toupper(resp);
    } 
  } while ((resp != 'S') && (resp != 'N'));

  cout << " \nrespuesta leida: " << resp << endl;
  
  return 0;
}
