#include <iostream>
using namespace std;

int main(){
	int x;
	x = 4;
	cout << "Valor o contenido de x: " << x << endl;
	cout << "Direccion de memoria de x: " << &x << endl;
	int *p;
	cout << "cree el puntero p (int *p)" << endl;
	cout << "su valor o contenido es: " << p << endl;
	cout << "Es su localizador de memoria" << endl;
	cout << "la direccion de memoria de p es: " << &p << endl;
	p = &x;
	cout << "Ahora he asignado el valor de x a p (p = &x;) y vale: " << p << endl;
	cout << "Ahora ves que el puntero p señala a la direccion donde esta x" << endl;
	*p = 7;
	cout << "acceso al contenido de x usando puntero p: " << *p << endl;
	return 0;
}
