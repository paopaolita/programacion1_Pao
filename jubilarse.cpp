#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int anios, edad;
	cout << "Ingrese los años de servicio de la persona: ";
	cin >> anios;
	cout << "Ingrese la eddad de la persona";
	cin >> edad;
	if(anios >= 25 && edad >=65) {
		cout << "Ya se puede jubilar, felicidades";
	} else {
		cout << "Aun no puede jubilarse";	
	}
	
	return 0;
}

