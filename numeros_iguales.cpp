#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2;
	cout << "Ingrese el primer n�mero: ";
	cin >> num1;
	cout << "Ingrese el segundo n�mero: ";
	cin >> num2;
	if (num1 != num2){
		cout << "Los nu�meros no son iguales ";
	} 
	if ( num1 == num2 ) {
		cout << "Los nu�meros son iguales ";
	}
	return 0;
}

