/*
 * Tamaño de una Estructura
 * Uso del operador sizeof
 *
*/

#include <iostream>
#include <cstring>

using namespace std;

struct Persona
{
  char nombre[30];
  int edad;
  float altura;
  float peso;
};

struct Mascota
{
  char nombre[30];
  struct Persona cuidador;
  char color[20];
  char tipo[20];
};

struct Libro
{
  char titulo[50];
  char autor[25];
  char anio[10];
  char edicion[20];
};

int main()
{
  Persona p;
  cout << "\nEl tamaño de la estructura es: " << sizeof(p) << " bytes." << endl;

  strcpy(p.nombre, "José Alvarado");
  p.edad = 37;
  p.altura = 175;
  p.peso = 100;    

  // Tip: Saber cuanto ocupa un miembro ayuda a entender el ancho de banda de memoria.
  cout << "\nTamaño de char[30]: " << sizeof(p.nombre) << endl;
  cout << "Tamaño de int: " << sizeof(p.edad) << endl;

  Mascota m;
  strcpy(m.color, "Golden");
  strcpy(m.nombre, "Conan");
  strcpy(m.tipo, "Perro");
  m.cuidador = p;
  
  cout << "\nTamaño del cuidador de la mascota: " << sizeof(m.cuidador) << endl;

  cout << "Datos de la mascota de " << endl;
  cout << "Nombre: " << m.nombre << endl;
  cout << "Tipo: " << m.tipo << endl;
  cout << "Color: " << m.color << endl;
  cout << "Nombre del cuidador: " << m.cuidador.nombre << endl;

  Libro *libro = new Libro();
  strcpy(libro->titulo, "Computational Physics With C++");
  strcpy(libro->autor, "Heisember W");
  strcpy(libro->anio, "10-12-1980");
  strcpy(libro->edicion, "2da");

  cout << "\nDatos de libro: " << endl;
  cout << "Titulo: " << libro->titulo << endl;
  cout << "Autor: " << libro->autor << endl;
  cout << "Año de publicación: " << libro->anio << endl;
  cout << "Edición: " << libro->edicion << " edición" << endl;

  delete libro;

  return 0;
}
