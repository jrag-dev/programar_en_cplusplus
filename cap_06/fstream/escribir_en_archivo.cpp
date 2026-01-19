#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

#define FILE_NAME "resultados_particle.txt"


struct Particle
{
    double t1;
    double t2;
    double x1;
    double x2;
};

void escribir_datos(Particle (&p)) {
    // ios::out -> abre para escribir
    // ios::app -> (append) agrega al final sin borrar lo anterior
    std::ofstream archivo(FILE_NAME, std::ios::out);

    if (archivo.is_open()) {
        archivo << " Tiempo(s)   Posicion(m)\n";
        archivo << "\t" << p.t1 << " \t " << p.x1 << "\n";
        archivo << "\t" << p.t2 << " \t " << p.x2 << "\n";
        archivo.close();   // Siempre cerrar para liberar memoria
    } else {
        std::cerr << "Error al crear el archivo";
    }
}

void leer_datos() {
    std::string line;
    std::ifstream archivo(FILE_NAME);
    std::string encabezado;

    if (archivo.is_open()) {
        std::cout << "Leyendo datos desde el archivo.\n";
    }

    std::getline(archivo, encabezado);

    unsigned int count = 0;
    while(std::getline(archivo, line)) {
        count++;
        if (count == 0) {
            continue;
        } else {
            std::cout << line << std::endl;
        }
    }

    archivo.close();
}


int main(int argc, char const *argv[])
{
    Particle* p1 = new Particle{0.0, 1.0, 10.5, 15.2};

    escribir_datos(*p1);

    leer_datos();
    
    return 0;
}
