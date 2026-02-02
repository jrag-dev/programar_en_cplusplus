/*
*   Punteros dinamicos
*/

#include <iostream>

using namespace std;


int main(int argc, char const *argv[])
{
    double* x;
    double* y;

    x = new double[10];
    y = new double[10];

    for (size_t i = 0; i < 10; i++) {
        x[i] = ((double) (i));
        y[i] = 2.0*x[i];
    }

    cout << "\nx[i]" << "\t" << "y[i]" << endl;
    for (size_t i = 0; i < 10; i++) {
        cout << " " <<  x[i] << "\t" << " " << y[i] << endl;
    }

    cout << endl;

    delete[] x;
    delete[] y;
    
    return 0;
}
