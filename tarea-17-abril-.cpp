#include <iostream>
#include <windows.h>
using namespace std;

void mostrarmensaje() {
	cout << "1. Primer menu" << endl;
	cout << "2. Segundo menu" << endl;
	cout << "3. Salir" << endl;
}

void mostrarMenu1() {
	cout << "Menú 1:" << endl;
	cout << "1. Ingresar dos números para imprimir" << endl;
	cout << "2. Ingresar un número para imprimirlo en el centro de la consola" << endl;
	cout << "3. Ingresar una palabra para imprimirla 10 veces en la consola" << endl;
	cout << "4. Volver al menú principal" << endl;
}

void mostrarMenu2() {
	cout << "Menú 2:" << endl;
	cout << "1. Dirigirse a las coordenadas 30,30 e imprimir el caracter ASCII más raro" << endl;
	cout << "2. Saludar a uno de sus compañeros desde la consola" << endl;
	cout << "3. Volver al menú principal" << endl;
}

void gotoxy(int x, int y) {
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
}

void dosnum(int& x, int& y) {
	cout << "Ingrese la coordenada X: ";
	cin >> x;
	cout << "Ingrese la coordenada Y: ";
	cin >> y;
	gotoxy(x, y);
	cout << "Hola mundo desde gotoxy" << endl;
}

void obtenerTam(int& ancho, int& alto) {
	CONSOLE_SCREEN_BUFFER_INFO csbi;
	GetConsoleScreenBufferInfo(GetStdHandle(STD_OUTPUT_HANDLE), &csbi);
	ancho = csbi.srWindow.Right - csbi.srWindow.Left + 1;
	alto = csbi.srWindow.Bottom - csbi.srWindow.Top + 1;
}

void imprimirEnCentro(const string& texto) {
	int anchoCons, altoCons;
	obtenerTam(anchoCons, altoCons);
	
	int posX = (anchoCons - texto.length()) / 2;
	int posY = altoCons / 2;
	
	COORD coordenadas;
	coordenadas.X = posX;
	coordenadas.Y = posY;
	
	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordenadas);
	cout << texto << endl;
}

void imprimirPala(const string& palabra) {
	for (int num1 = 0; num1 < 10; num1 ++) {
		cout << "La palabra es: " << palabra << endl;
	}
}

void imprimirCaracterAsciiRaro() {
	gotoxy(30, 30);
	cout << char(64) << endl;
}

void saludarCompa() {
	string nombreCompa;
	cout << "Ingrese el nombre de su compañero: ";
	cin >> nombreCompa;
	cout << "¡Hola, " << nombreCompa << "!" << endl;
}


int main() {
	int opcion;
	int numero;
	int x, y;
	string palabra;
	
	do {
		mostrarmensaje();
		cin >> opcion;
		
		switch (opcion) {
		case 1: {
			mostrarMenu1();
			cin >> opcion; 
			switch (opcion) {
			case 1:
				dosnum(x, y);
				break;
			case 2:
				cout << "Ingrese un número: ";
				cin >> numero;
				imprimirEnCentro(to_string(numero));
				break;
			case 3:
				cout << "Ingrese una palabra: ";
				cin >> palabra;
				imprimirPala(palabra);
				break;
			case 4:
				break;
			default:
				cout << "Opción no válida." << endl;
			}
			break;
		}
		case 2: {
			mostrarMenu2();
			cin >> opcion;
			switch (opcion) {
			case 1:
				imprimirCaracterAsciiRaro();
				break;
			case 2:
				saludarCompa();
				break;
			case 3:
				break;
			default:
				cout << "Opción no válida." << endl;
			}
			break;
		}
		case 3:
			cout << "Saliendo del programa." << endl;
			break;
		default:
			cout << "Opción no válida." << endl;
		}
	} while (opcion != 4);
	return 0;
}



