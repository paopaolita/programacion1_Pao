#include <iostream>
using namespace std;

bool esBisiestoYDivisiblePorDiez(int ano) {
	if (ano % 4 == 0 && ano % 100 != 0 && ano % 10 == 0) {
		return true;
	} else {
		return false;
	}
}

int main(int argc, char *argv[]) {
	int ano;
	cout << "Ingrese un año: ";
	cin >> ano;
	
	if (esBisiestoYDivisiblePorDiez(ano)) {
		cout << ano << " es un año bisiesto y divisible por 10." << endl;
	} else {
		cout << ano << " no es un año bisiesto y divisible por 10." << endl;
	}
	
	return 0;
}

