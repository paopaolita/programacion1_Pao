#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num;
	cout << "Ingrese un número grande: ";
	cin >> num;
	if(num >= 500 && num <= 1000) {
		cout << "Está en el rango";
	} else {
		cout << "No está en el rango";	
	}
	return 0;
}

