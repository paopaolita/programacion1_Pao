#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	//programa de tipo char
	char letra;
	cout << "Quiere continuar? S/N";
	cin >> letra;
	
	if(letra == 'S'){
		cout << "Valor de la letra: " << letra << endl;
		cout << "Eligio que si";
	} 
	
	else if (letra == 'N') { //condicion aparte
		cout << "Eligio que no";
	}
	
	else {
		cout << "No eligio una letra correcta";
	}
	return 0;
}

