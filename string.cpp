#include <iostream>
#include <string>

using namespace std;

int main(int argc, char *argv[]) {
	//como declarar variables string
	//Los espacios no los toma en cuenta, corta la cadena
	string nombre;
	cout << "Ingrese su nombre completo: ";
	cin >> nombre;
	cout << "El nombre completo es: " << nombre;
	
	return 0;
}

