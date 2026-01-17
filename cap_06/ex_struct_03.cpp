/*
*   Uso de estructuras anidadas
*/

struct empleado
{
    char nombre_emp[30];
    char direccion[25];
    char ciudad[20];
    char provincia[20];
    long int cod_postal;
    double salario;
};

struct cliente
{
    char nombre_cliente[30];
    char direccion[25];
    char ciudad[20];
    char provincia[20];
    long int cod_postal;
    double saldo;
};


// Forma anidada, evitamos repetir tanto código
struct address
{
    char direccion[25];
    char ciudad[20];
    char provincia[20];
    long int cod_postal;
};

struct employee 
{
    char empl_name[30];
    double salary;
    struct address empl_address;
};

struct customer
{
    char cust_name[30];
    double balance;
    struct address cust_address;
}