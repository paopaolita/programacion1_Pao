#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int medida = 0;
	cout << "Ingrese el valor que quiere medir: " << endl;
	cin >> medida;
	int opcion;
	cout << "Que quiere convertir 1.Kms a metros 2.Metros a Kms 3.Pies a pulgadas 4. Pulgadas a pies 5.Kms a Millas" << endl;
	cin >> opcion;
	if (opcion == 1) {
		int resultado1 = medida * 1000;
		cout << "La conversion de kilometros a metros es: " << resultado1;
	}
	else if ( opcion == 2) {
		int resultado2 = medida / 1000;
		cout << "La conversion de metros a kilometros es: " << resultado2;
	}
	else if ( opcion == 3) {
		int resultado3 = medida * 12;
		cout << "La conversion de pies a pulgadas es: " << resultado3;
	}
	else if ( opcion == 4) {
		int resultado4 = medida / 12;
		cout << "La conversion de pulgadas a pies es: " << resultado4;
	}
	else if ( opcion == 5) {
		int resultado5 = medida *  0.621371;
		cout << "La conversion de kms a millas es: " << resultado5;
	}
	else {
		cout << "Opción inválida. Por favor ingrese un número del 1 al 5." << endl;
	}
	return 0;
}

