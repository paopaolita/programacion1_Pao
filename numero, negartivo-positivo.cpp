#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double numero; 
	cout << "Pon un n�mero: ";
	cin >> numero;
	if (numero >= 0){
		cout << "Es un n�mero positivo " << numero;
	} 
	if ( numero < 0 ) {
		cout << "Es un n�mero negativo " << numero;
	}
	return 0;
}

