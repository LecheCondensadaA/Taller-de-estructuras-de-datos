#include <iostream>
#include <string>
using namespace std;

int main(){
	int x = 2; // defines un entero
	float y = 3.1415; // defines un decimal
	char c = 'a'; // defines un caracter
	char curso[10] = "Taller"; // esto es un array de caracteres, o un string primitivo
	string s; // c++ no tiene soporte para strings como tal, lo debes agregar con <string>
	
	cout << "oli, estamos empezando el curso " << curso << endl;
	cout << "empezemos con algo basico, ingresa un numero x= " << endl;
	
	cin >> x;
	cout << "ahora una frase: " << endl;
	cin >> s;
	
	cout << "has ingresado x= " << x << "s= " << s << endl;
	
	return 0;
}
