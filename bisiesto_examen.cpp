#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int ano;
	cout << "Ingrese un a�o: ";
	cin >> ano;
	
	if ((ano % 4 == 0 && ano % 100 != 0) || (ano % 400 == 0)) {
		cout << "Es bisiesto";
	} else {
		cout << "No es bisiesto";
	}
	return 0;
}

