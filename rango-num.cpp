#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num;
	cout << "Ingrese un n�mero grande: ";
	cin >> num;
	if(num >= 500 && num <= 1000) {
		cout << "Est� en el rango";
	} else {
		cout << "No est� en el rango";	
	}
	return 0;
}

