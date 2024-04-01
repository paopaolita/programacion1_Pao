#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int contrasenna;
	cout << "BIENVENIDO A SU CUENTA DE CHEETOS INGRESE UNA CONTRASEÑA: " << endl;
	cin >> contrasenna; 
	if ( contrasenna >= 10000  && contrasenna % 3 == 0 && contrasenna % 2 != 0) {
	 cout << "Contraseña valida" << endl;
	}
	else {
		cout << "Contraseña invalida" << endl;
	}

	return 0;
}

