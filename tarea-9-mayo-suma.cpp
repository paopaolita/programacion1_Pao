#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double num1;
	double num2;
	double num3;
	double num4;
	double num5;
	cout << "Ingrese números para la suma" << endl;
	cout << "Ingrese el primer numero: " << endl;
	cin >> num1;
	cout << "Ingrese el segundo numero: " << endl;
	cin >> num2;
	cout << "Ingrese el tercer numero: " << endl;
	cin >> num3;
	cout << "Ingrese el cuarto numero: " << endl;
	cin >> num4;
	cout << "Ingrese el quinto numero: " << endl;
	cin >> num5;
	double suma; 
	suma = (num1 + num2) + (num3 + num4) + num5;
    cout << "El resultado de la suma es: " << suma << endl;	
			 
	return 0;
}

