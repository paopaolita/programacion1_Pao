#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1, num2;
	cout << "Ingrese primer número: ";
	cin >> num1;
	cout << "Ingrese el segundo número: ";
	cin >> num2;
	if(num1 > num2 ) {
		cout << "El número 1 es mayor";
	} else {
		cout << "El número dos es mayor";	
	}
	
	return 0;
}

