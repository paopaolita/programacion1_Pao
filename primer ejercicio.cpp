#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2;
	cout << "Ingrese un número por favor (entero menor o igual a 10): : " << endl;
	cin >> num1;
	cout << "Ingrese un número por favor como exponente y que este sea entero: " << endl;
	cin >> num2;
	
	if (num1 <= 10 && num2 >= 0) {
		int resultado = 1;
		int potencia = 0;
		while (potencia < num2)  {
			resultado *= num1;
			potencia++;
		}
		cout << "El resultado de " << num1 << " elevado a la potencia " << num2 << " es " << resultado << endl;
	} else {
		cout << "Los números ingresados no son válidos." << endl; 
	}
	
	return 0;
}

