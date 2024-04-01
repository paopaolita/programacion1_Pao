#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	cout << "Ingrese un número por favor: " << endl;
	cin >> numero;
	if ( numero <= 0){
		cout << "El número es negativo: " << numero << endl;
		if (numero % 2 == 0){
			cout << "Es numero par";
		} 
		else {
			cout << "Es numero impar";
		}
	}
	
	else if ( numero >= 1) {
		cout << "El número es positivo: " << numero << endl;
		if (numero % 2 == 0){
			cout << "Es numero par";
		} 
		else {
			cout << "Es numero impar";
		}
	}
	return 0;
}

