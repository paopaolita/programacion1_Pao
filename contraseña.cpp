#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int contrasenna;
	cout << "BIENVENIDO A SU CUENTA DE CHEETOS INGRESE UNA CONTRASEŅA: " << endl;
	cin >> contrasenna; 
	if ( contrasenna >= 10000  && contrasenna % 3 == 0 && contrasenna % 2 != 0) {
	 cout << "Contraseņa valida" << endl;
	}
	else {
		cout << "Contraseņa invalida" << endl;
	}

	return 0;
}

