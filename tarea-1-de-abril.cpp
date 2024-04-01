#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero; 
	cout << "Ingrese el número de términos de la serie Fibonacci que desea calcular: ";
	cin >> numero;
	int num1 = 0, num2 = 1;
	int num3 = 0;
	cout << "Serie Fibonacci: ";
	do {
		cout << num1 << " ";
		int fibro = num1;
		num1 = num2;
		num2 = fibro + num2;
		num3++;
	} while (num3 < numero);
	return 0;
}

