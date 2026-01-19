/*
*   Tarea inmediata para hoy: Termina el capítulo de Structs de Joyanes y crea un programa 
*   que use un struct para almacenar los datos de un planeta (masa, x, y, vx, vy) y calcule 
*   la fuerza gravitacional entre dos planetas. Compílalo usando un archivo CMakeLists.txt 
*   básico. ¡A trabajar!
*
*   Date: 17-01-2026
*   Programmer: Jose Alvarado
*/


#include "planeta.hpp"
#include <iostream>
#include <iomanip>
#include <cmath>


int main(int argc, char const *argv[])
{
    planeta* tierra = new planeta{5.972e24, 0.0, 0.0, 0.0, 29780.0};
    planeta* luna = new planeta{7.348e22, 384400000.0, 0.0, 0.0, 1022.0};
    double fuerza = 0.0;

    calcular_fuerza_gravitacional(fuerza, *tierra, *luna);

    std::cout << std::fixed << std::setprecision(2);
    std::cout << "La magnitud de la fuerza gravitacional es: " << std::scientific << fuerza << " Newtons." << std::endl;
    
    return 0;
}
