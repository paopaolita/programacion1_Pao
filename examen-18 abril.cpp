#include <iostream>
#include <cmath>
using namespace std;

void mostrarMenu() {
	cout << "Men�:" << endl;
	cout << "1. Calculadora de la hipotenusa de un tri�ngulo" << endl;
	cout << "2. Calculadora del �ngulo faltante de un tri�ngulo" << endl;
	cout << "3. Calculadora del factorial de un n�mero" << endl;
	cout << "4. Calculadora de vuelto" << endl;
	cout << "5. Salir" << endl;
}

void fact(int num) {
	int fact = 1;
	for (int i = 1; i <= num; ++i) {
		fact *= i;
	}
	cout << "Factorial de " << num << ": " << fact << endl;
}

void vuelto(double num1, double num2) {
    int x, y; 
	cout << "Ingrese el total pagado: ";
	cin >> num1;
	cout << "Ingrese el total de lo que deberia pagar: "; 
	cin >> num2;
	double vuelt;
	if (num1 > num2) {
		vuelt = num1 - num2;
		cout << "El vuelto ser� de: " << vuelt << endl;
	} else {
		cout << "Cantidad Invalida" << endl;
		vuelto(x, y);
	}
}

void hipo(int ady, int op, int total) {
	cout << "Introducir Adyacente: ";
	cin >> ady;
	cout << "Introducir Opuesto: ";
	cin >> op;
	total = ady * ady + op * op;
	double hipotenusa = std::sqrt(total);
	cout << "Hipotenusa: " << hipotenusa << endl; 
}

void ang(int ang1, int ang2, int tota) {
	cout << "Introduce el primer �ngulo: ";
	cin >> ang1;
	cout << "Introduce el segundo �ngulo: ";
	cin >> ang2;
	tota = 180 - (ang1 + ang2);
	cout << "El �ngulo que falta tiene el n�mero de: " << tota << endl;
}

int main() {
	int opcion;
	int num;
	int tota;
	double hipotenusa; 
	double vuelt;
	int x, y;	
	do {
		mostrarMenu();
		cin >> opcion;
		
		switch (opcion) {
		case 1:
			hipo(x, y, hipotenusa); 
			break;
		case 2:
			ang(x, y, tota);
			break;
		case 3:
			cout << "Ingrese un n�mero para calcular su factorial: ";
			cin >> num;
			fact(num);
			break;
		case 4:
			vuelto(x, y);
			break;
		case 5:
			break;
		default:
			cout << "Opci�n no v�lida." << endl;
		}
	} while (opcion != 5);
	return 0;
}
