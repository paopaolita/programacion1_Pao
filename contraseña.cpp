#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int contrasenna;
	cout << "BIENVENIDO A SU CUENTA DE CHEETOS INGRESE UNA CONTRASE�A: " << endl;
	cin >> contrasenna; 
	if ( contrasenna >= 10000  && contrasenna % 3 == 0 && contrasenna % 2 != 0) {
	 cout << "Contrase�a valida" << endl;
	}
	else {
		cout << "Contrase�a invalida" << endl;
	}

	return 0;
}

