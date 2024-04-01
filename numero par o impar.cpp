#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num3;
	int suma = 0;
	int resultado = 0;
	
	cout << "Ingrese un número por favor: ";
	cin >> num3;
	
	if (num3 % 2 == 0) {
		for (int par = 0; par <= num3; par += 2) {
			cout << par << std::endl;
			resultado += par;
			cout << "sumado es " << resultado << endl;
		}
	} else {
		for (int par = 1; par <= num3; par += 2) {
			cout << par << std::endl;
			resultado += par;
			cout << "sumado es " << resultado << endl;
		}
	}
	return 0;
}

