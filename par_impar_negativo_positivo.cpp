#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	cout << "Ingrese un n�mero por favor: " << endl;
	cin >> numero;
	if ( numero <= 0){
		cout << "El n�mero es negativo: " << numero << endl;
		if (numero % 2 == 0){
			cout << "Es numero par";
		} 
		else {
			cout << "Es numero impar";
		}
	}
	
	else if ( numero >= 1) {
		cout << "El n�mero es positivo: " << numero << endl;
		if (numero % 2 == 0){
			cout << "Es numero par";
		} 
		else {
			cout << "Es numero impar";
		}
	}
	return 0;
}

