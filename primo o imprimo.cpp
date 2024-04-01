#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int numero;
	cout << "Ingresa un numero y te digo si es primo";
	cin >> numero;
	if (numero != 1 && numero > 1)
	{
		for (int i = 2; i <= numero; i++){
			if ((numero % i) == 0 && numero != 2){
				cout << "El numero " << numero << " no es primo";
				break;
			}else { 
				cout << "El numero " << numero << " es primo";
				break;
			}
		} 
	} 
	return 0;
}

