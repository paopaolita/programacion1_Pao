#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2;
	cout << "Ingrese primer n�mero: ";
	cin >> num1;
	cout << "Ingrese el segundo n�mero: ";
	cin >> num2;
	if(num1 > num2 ) {
		cout << "El n�mero 1 es mayor";
	} else {
		cout << "El n�mero dos es mayor";	
	}
	
	return 0;
}

