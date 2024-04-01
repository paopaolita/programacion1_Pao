#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//programa de tipo bool
	bool ganamos = false;
	int numero;
	cout << "Ingrese un numero mayor a 10 para ganar ";
	cin >> numero;
	if (numero >= 10) {
		ganamos = true;
	} else {
		ganamos = false;
	}
	
	if (ganamos == true) {
		cout << "Si ganamos";
	}
	else {
		cout << "No ganamos";
	}
	return 0;
}

