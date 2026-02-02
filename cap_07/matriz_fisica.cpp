/*
*   una Clase MatrizFisica que gestione esta memoria de forma automática
*/

#include <iostream>
#include <new>
#include <exception>

using namespace std;


class MatrizFisica {
    private:
        double* datos;  // puntero a la memoria real
        size_t tamano;  // Número de elementos;

    public:
        // 1. CONSTRUCTOR: Reserva la memoria al crear el objeto
        MatrizFisica(size_t n) : tamano(n) {
            try {
                datos = new double[tamano];
                cout << "-> Memoria para " << tamano << " elementos reservada." << endl;

                // Inicializamos a cero (limpieza)
                for (size_t i = 0; i < tamano; i++) datos[i] = 0.0;

            } catch (const bad_alloc& e) {
                cerr << "Error: No se pudo crear la matriz: " << e.what() << endl;
                throw;  // Re-lanzamos el error para que el programa principal sepa que ocurrio
            }
        }

        // 2. DESTRUCTOR: Se ejecuta automáticamente al final de la vida del objeto
        ~MatrizFisica() {
            delete[] datos;
            cout << "-> Memoria liberada automaticamente por el Destructor." << endl;
        }

        // Método para acceder a los datos de forma segura
        void set(size_t i, double valor) {
            if (i < tamano) datos[i] = valor;
        }

        double get(size_t i) const {
            return (i < tamano) ? datos[i] : 0.0;
        }

        size_t length() const {
            return tamano;
        }
};


int main(int argc, char const *argv[])
{
    try {
        // CReamos un bloque de código para ver el efecto del destructor
        {
            cout << "Creando sistema de 5 particulas..." << endl;
            MatrizFisica sistema(5);

            sistema.set(0, 9.81);
            cout << "Valor en indice 0: " << sistema.get(0) << endl;
            cout << "Valor en indice 1: " << sistema.get(1) << endl;
            cout << "Valor en indice 2: " << sistema.get(2) << endl;
            cout << "Valor en indice 3: " << sistema.get(3) << endl;
        }   // <--- Al llegar aquí, 'sistema' sale del scope y se llama al destructor

        cout << "El objeto ya no existe en este punto." << endl;

    } catch (...) {
        cerr << "El programa termino debido a un error de memoria" << endl;
    }
    
    return 0;
}
