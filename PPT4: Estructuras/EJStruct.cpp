#include <iostream>
using namespace std;

struct Persona{ // definimos la estructura ('''plantilla''') persona que incluida bla bla
    char nombre[50]; // tipo dato1
    int edad; //tipo dato 2
    float sueldo; //tipo dato3
};

int main(){
    Persona p1; // usa la estructura pero define la plantilla y la usa como p1, para acceder a ella necesitamos usar p1

    cout << "Ingrese nombre completo: ";
    cin.get(p1.nombre, 50); // para optener dato se usa nombre.dato1
    cout << "Ingrese edad: ";
    cin >> p1.edad; // nombre2.dato2
    cout << "Ingrese el salario: ";
    cin >> p1.sueldo;

    cout << "\nInformacion guardada en el struct Persona p1 " << endl;
    cout << "p1.nombre: " << p1.nombre << endl;
    cout << "p1.edad: " << p1.edad << endl;
    cout << "p1.sueldo: " << p1.sueldo << endl;

    return 0;
}
