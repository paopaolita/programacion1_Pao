#include <iostream>
#include <string>

using namespace std;


int cifrar(int contrasena, int numero) {
	int resultado = contrasena + numero; 
	resultado *= numero; 
	return resultado;
}

int main() {
	int contrasena, numero, contrasena1;
	

	cout << "Ingrese una contraseña numérica: ";
	cin >> contrasena;
	

	cout << "Ingrese un número para las operaciones: ";
	cin >> numero;
	

	contrasena1 = cifrar(contrasena, numero);
	
	
	cout << endl << "Contraseña cifrada: " << contrasena1 << endl;
	
	return 0;
}

