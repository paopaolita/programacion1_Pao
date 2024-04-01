#include <iostream>
#include <cmath>

using namespace std;

bool esPrimo(int numero) {
	if(numero <= 1) {
		return false;
	}
	for(int i = 2; i <= sqrt(numero); i++) {
		if(numero % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int numero;
	cout << "Ingrese un numero entero positivo: ";
	cin >> numero;
	
	if(esPrimo(numero)) {
		cout << numero << " es un numero primo." << endl;
	} else {
		cout << numero << " no es un numero primo." << endl;
	}
	
	return 0;
}
