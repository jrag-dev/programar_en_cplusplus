/*
*   Aprendindo sobre el uso de memoria
*/

#include <iostream>
#include <new>
#include <exception>

using namespace std;


int main(int argc, char const *argv[])
{
    // Intentamos pedir 100,000,000,000 de doubles (aprox 800GB)
    size_t n = 100000000000000ULL;

    try {
        cout << "\nIntentando asignar memoria para " << n << " elementos..." << endl;

        double* gran_matriz = new double[n];

        cout << "\nMemoria virtual asignada. Ahora forzando reserva fisica..." << endl;

        for (size_t i = 0; i < n; i += 1000000) {
            gran_matriz[i] = 0.0;
        }

        // si llega aqui, es que hubo éxito
        delete[] gran_matriz;

        cout << "\nPaso..." << endl;

    } catch (const bad_alloc& e) {
        // capturamos el error de asignación especificamente
        cerr << "CRITICAL ERROR: No hay RAM suficiente. Detalles: " << e.what() << endl;
        return 1;
    } catch (const exception& e) {
        // Capturamos cualquier otro error estándar
        cerr << "Error inesperado: " << e.what() << endl;
        return 1;
    }
    
    return 0;
}
