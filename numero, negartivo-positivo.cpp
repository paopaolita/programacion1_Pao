#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double numero; 
	cout << "Pon un número: ";
	cin >> numero;
	if (numero >= 0){
		cout << "Es un número positivo " << numero;
	} 
	if ( numero < 0 ) {
		cout << "Es un número negativo " << numero;
	}
	return 0;
}

