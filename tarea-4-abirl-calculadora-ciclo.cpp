#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int control = 1;
	int opcion;
	do {
		cout << "Hola buenas tardes";
		cout << endl << "Bienvenido a la calculadora: opciones: 1.Suma  2.Resta   3.Division   4.Multiplicacion";
		cin >> opcion;
		switch (opcion) {
		case 1: 
			int numero1;
			cout << "hola, pon un número: "; 
			cin >> numero1;
			int numero2;
			cout << "hola, pon otro número: "; 
			cin >> numero2;
			int resultado1;
			resultado1 = numero1 + numero2;
			cout << "Resultado es: " << resultado1;
			cout << endl << "¿Desea repetir? 1. Si, 2. No";
			cin >> control;
			break;
		case 2: 
			int numero3;
			cout << "hola, pon un número: "; 
			cin >> numero3;
			int numero4;
			cout << "hola, pon otro número: "; 
			cin >> numero4;
			int resultado;
			resultado = numero3 - numero4;
			cout << "Resultado es: " << resultado;
			cout << endl << "¿Desea repetir? 1. Si, 2. No";
			cin >> control;
			break;
		case 3: 
			int numero5;
			cout << "hola, pon un número: "; 
			cin >> numero5;
			int numero6;
			cout << "hola, pon otro número: "; 
			cin >> numero6;
			int resultado2;
			resultado2 = numero5 / numero6;
			cout << "Resultado es: " << resultado2;
			cout << endl << "¿Desea repetir? 1. Si, 2. No";
			cin >> control;
			break;
		case 4: 
			int numero7;
			cout << "hola, pon un número: "; 
			cin >> numero7;
			int numero8;
			cout << "hola, pon otro número: "; 
			cin >> numero8;
			int resultado3;
			resultado3 = numero7 * numero8;
			cout << "Resultado es: " << resultado3;
			cout << endl << "¿Desea repetir? 1. Si, 2. No";
			cin >> control;
			break;
		default: 
			cout << "Ponga algo coherente por fa";
			cout << endl << "¿Desea repetir? 1. Si, 2. No";
			cin >> control;
		}
	
	} while (control == 1);
	
	
	cout << "Salimos del ciclo";
	return 0;
}

