#include <iostream>
using namespace std;

struct Persona{
    char nombre[50];
    int edad;
    float sueldo;
};

int main(){
    Persona p1;

    cout << "Ingrese nombre completo: ";
    cin.get(p1.nombre, 50);
    cout << "Ingrese edad: ";
    cin >> p1.edad;
    cout << "Ingrese el salario: ";
    cin >> p1.sueldo;

    cout << "\nInformacion guardada en el struct Persona p1 " << endl;
    cout << "p1.nombre: " << p1.nombre << endl;
    cout << "p1.edad: " << p1.edad << endl;
    cout << "p1.sueldo: " << p1.sueldo << endl;

    return 0;
}
