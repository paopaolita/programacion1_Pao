#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2;
	cout << "Ingrese el primer número: ";
	cin >> num1;
	cout << "Ingrese el segundo número: ";
	cin >> num2;
	if (num1 != num2){
		cout << "Los nuúmeros no son iguales ";
	} 
	if ( num1 == num2 ) {
		cout << "Los nuúmeros son iguales ";
	}
	return 0;
}

