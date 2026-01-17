/*
 * Estructura para represen tar los datos de un CD:
 * Título               Ay, ay, ay, se me ha muerto el canario
 * Artista              No me pises que llevo chanclas
 * Número de canciones  10
 * Precio               2222.25
 * Fecha de compra      8-10-1992
 *
*/

// Colección de CD
struct coleccion_cd
{
  char titulo[30];
  char artista[25];
  int num_canciones;
  float precio;
  char fecha_compra[8];
};

// Información de libro
struct info_libro 
{
  char titulo[60];
  char autor[30];
  char editorial[30];
  int anio;               // -> año
} libro1 = {"C++ a su alcance", "Luis Joyanes", "McGraw-Hill", 1994};

// Fecha
struct Fecha
{
  int month;
  int day;
  int year;
};

Fecha FechaNacimiento = {11, 21, 1988};

// Persona
struct Persona
{
  char nombre[25];
  char apellido[25];
  int edad;
  char profesion[30];
  char direccion[50];
} persona1 = {
  "Jose",
  "Alvarado",
  37,
  "Físico",
  "Cumaná-Venezuela"
};
