#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main(int argc, char *argv[]) {
	string respuesta;
	bool salir = false;
	do {
		cout << "Este trabajo no es obligatorio, pero pueden hacerlo si gustan" << endl; 
		cout << "�Deseas continuar? (si/no): ";
		cin >> respuesta;
		for (char &c : respuesta) {
			c = tolower(c);
		}
		if (respuesta == "si") {
			int numero;
			cout << "Ingresa un n�mero: "; 
			cin >> numero;
			cout << "El n�mero ingresado es: " << numero << endl;
			
		}
		else if (respuesta == "no") {
			cout << "�Hasta luego!" << endl;
			salir = true;
		}
		else {
			cout << "Respuesta no v�lida. Por favor, ingresa 'si' o 'no'." << endl;
		}
	} while (salir == false);
	
	return 0;
}

