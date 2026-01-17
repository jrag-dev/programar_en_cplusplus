/*
*   Diseñar una estructura que contenga información de operaciones financieras.
*   Esta estructura debe constar de:
*   - Un número de cuenta
*   - Una cantidad de dinero
*   - El tipo de operación (depósito o retiro)
*   - la fecha y hora en que se ha realizado la operación.
*/


#include <iostream>
#include <unordered_map>
#include <string>
#include <iomanip>

enum tipo_de_operacion {
    DEPOSITO,
    RETIRO
};

struct registro_operacion
{
    std::string numero_cuenta;
    double cantidad;
    tipo_de_operacion tipo_operacion;
    struct {
        unsigned int dia, mes, anyo;
    } fecha;
    struct {
        unsigned int horas, minutos, segundos;
    } tiempo;
    
};

void imprimir_operacion(const registro_operacion &p) {
    std::string tipo_operacion = p.tipo_operacion == 0 ? "DEPOSITO" : "RETIRO";
    std::string am_or_pm = p.tiempo.horas >= 12 ? "pm" : "am";
    std::cout << "\n==============================================" << std::endl;
    std::cout << " Resumen de Operaciones: " << std::endl;
    std::cout << "==============================================" << std::endl;
    std::cout << "Tipo de operación: " << tipo_operacion << std::endl;;
    std::cout << "Cuenta: " << p.numero_cuenta << std::endl;
    std::cout << std::setfill('0') << "Fecha: " 
              << std::setw(2) <<  p.fecha.dia << "-" 
              << std::setw(2) << p.fecha.mes << "-" 
              << std::setw(2) <<  p.fecha.anyo << std::endl;
    std::cout << std::setfill('0') << std::setw(2) 
              << "Hora: " << p.tiempo.horas << ":" 
              << std::setw(2) << p.tiempo.minutos << ":" 
              << std::setw(2) << p.tiempo.segundos <<  " " << am_or_pm << std::endl;
    std::cout << "Cantidad: $" << p.cantidad << std::endl;
}


int main(int argc, char const *argv[])
{
    registro_operacion* historial[3];

    struct registro_operacion *operacion = new registro_operacion();
    operacion->cantidad = 500.00;
    operacion->tipo_operacion = DEPOSITO;
    operacion->numero_cuenta = "0102055487996544";
    operacion->fecha.mes = 1;
    operacion->fecha.dia = 6;
    operacion->fecha.anyo = 2000;
    operacion->tiempo.horas = 12;
    operacion->tiempo.minutos = 45;
    operacion->tiempo.segundos = 5;

    historial[0] = operacion;
    historial[1] = new registro_operacion{"0102045566337878", 900.00, DEPOSITO, {14, 7, 2001}, {7, 7, 9}};
    historial[2] = new registro_operacion{"0102045566338888", 200.00, RETIRO, {14, 7, 2000}, {14, 4, 21}};


    for (int i = 0; i < 3; i++) {
        imprimir_operacion(*historial[i]);
    }


    for (int i = 0; i < 3; i++) {
        delete historial[i];
    }
    
    return 0;
}
