#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	bool valor = false;
	char letra;
	cout << "Escoja una letra entre s y n: ";
	cin >> letra;
	if (letra == 's') {
		valor = true;
	} else {
		valor = false;
	}
	
	if (valor == true) {
		cout << "El valor es verdadero";
	}
	else {
		cout << "El valor es falso";
	}
	return 0;
}

