/*
*   Aplicación que muestra el uso de memoria dinámica
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
    int suma = 0;
    int n;
    int *p;

    cout << "\nIntroduzca el número de elementos: ";
    cin >> n;

    p = new int[n];

    for (size_t i = 0; i < n; i++) {
        cout << "Introduzca el elemento " << i << ": ";
        cin >> p[i];
        suma += p[i];
    }

    cout << "\nElementos introducidos: " << endl;
    for (size_t i = 0; i < n; i++) {
        cout << p[i] << " , ";
    }
    
    cout << endl;
    cout << "Total: " << suma << endl;
    cout << fixed << setprecision(2) << "Media: " << (double) suma / n << endl;
    
    delete[] p;
    
    return 0;
}
