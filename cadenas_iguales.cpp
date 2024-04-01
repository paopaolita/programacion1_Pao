#include <iostream>     
using namespace std;

int main(int argc, char *argv[]) {
	string cadena1, cadena2;
	cout << "Ingrese primer cadena de texto: ";
	cin >> cadena1;
	cout << "Ingrese el segunda cadena: ";
	cin >> cadena2;
	if(cadena1 == cadena2 ) {
		cout << "Son cadenas iguales";
	} else {
		cout << "No son cadenas iguales";	
	}
	return 0;
}

