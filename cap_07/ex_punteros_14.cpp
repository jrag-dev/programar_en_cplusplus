/*
*   Punteros a estructuras
*/

#include <iostream>
#include <string>

using namespace std;

struct persona
{
    string firstname;
    string lastname;
    unsigned int age;
    unsigned int height;
    int weight;
};

void show_person_info(const persona *ptr);

int main(int argc, char const *argv[])
{
    persona empleados[] = {
        {"Miguel", "Rondon", 40, 164, 90},
        {"Jesus", "Alvarado", 38, 180, 78},
        {"Carlos", "Brito", 38, 167, 86},
        {"Jose", "Alvarado", 37, 175, 98}
    };

    persona *p;
    p = empleados;
    for (size_t i = 0; i < 4; i++, p++) {
        show_person_info(p);
    }
 
    return 0;
}


void show_person_info(const persona *ptr) {
    cout << "\nName: " << ptr->firstname << " " << ptr->lastname << endl;
    cout << "Age: " << ptr->age << " year old." << endl;
    cout << "Height: " << ptr->height << " centimeters." << endl;
    cout << "Weight: " << ptr->weight << endl;
}