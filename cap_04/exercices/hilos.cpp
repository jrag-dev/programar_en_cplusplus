#include <iostream>
#include <thread> // Librería fundamental para hilos
#include <string>

// Esta es la función que ejecutará cada hilo
void saludar(std::string nombre, int id) {
    std::cout << "\nHola, soy el hilo " << id << " (" << nombre << ")" << std::endl;
}

int main() {
    // 1. Creamos los hilos y les pasamos una función y sus argumentos
    std::thread hilo1(saludar, "Proceso A", 1);
    std::thread hilo2(saludar, "Proceso B", 2);

    std::cout << "\nMensaje desde el hilo principal (CPU)" << std::endl;

    // 2. IMPORTANTE: El hilo principal debe esperar a que los otros terminen
    // Si no pones .join(), el programa principal se cierra y mata a los hilos
    hilo1.join();
    hilo2.join();

    std::cout << "Todos los hilos han terminado." << std::endl;

    return 0;
}
