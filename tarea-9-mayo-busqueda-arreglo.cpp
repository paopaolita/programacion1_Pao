#include <iostream>
using namespace std;

int main() {
	const int num = 10;  
	double num2[num];
	double num3;
	bool busq = false;
	
	cout << "Ingresa 10 numeros: " << endl;
	
	for (int i = 0; i < num; ++i) {
		cout << "Ingrese un número en la posición " << i + 1 << ": ";
		cin >> num2[i]; 
		
	}
	
	
	cout << "Ingresa un numero para buscar: " << endl;
	cin >> num3;
	
	for (int i = 0; i < num; ++i) {
		if (num2[i] == num3) {
			busq = true;
			break;  
		}
	}
	
	if (busq) {
		cout << "Felicidades " << endl;  
	} else {
		cout << "Mala suerte" << endl;   
	}
	
	return 0;
}

