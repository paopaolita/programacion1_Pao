#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num3 = 0; 
	cout << "Ingrese un numero por favor para buscar su tabla de multiplicar: ";
	cin >> num3;
	for (int multipli = 0; multipli <= 10; multipli++) {
		int resultado = num3 * multipli; 
		cout << num3  << "*" << multipli << "=" << resultado << endl;
	}
	return 0;
}

