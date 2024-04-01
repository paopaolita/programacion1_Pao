#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;

	cout << "Ingrese un número: ";
	cin >> numero;
	
	if (numero % 3 == 0) {
		cout << "El número " << numero << " es divisible exactamente por 3." << endl;
	} else {
		cout << "El número " << numero << " no es divisible exactamente por 3." << endl;
	}
	return 0;
}

