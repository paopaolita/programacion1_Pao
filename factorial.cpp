#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num;
	cout << "Ingrese un número para calcular su facorial: " << endl;
	cin >> num;
	if (num < 0) {
		cout << "No se puede calcular el factorial por que es negativo" << endl;
	} else {
		int fact = 1;
		int num2 = 1;
		do {
		 fact *= num2;
		 num2++;
		} while(num2 <= num );
		cout << "El factorial de " << num << " es: " << fact << endl;
	}
		return 0;
}

