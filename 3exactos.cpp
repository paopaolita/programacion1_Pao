#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;

	cout << "Ingrese un n�mero: ";
	cin >> numero;
	
	if (numero % 3 == 0) {
		cout << "El n�mero " << numero << " es divisible exactamente por 3." << endl;
	} else {
		cout << "El n�mero " << numero << " no es divisible exactamente por 3." << endl;
	}
	return 0;
}

