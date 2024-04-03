#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1 = 0;
	cout << "Por fav or ingrese un numero  " ;
	cin >> num1;
	
	switch(num1){
	case 1:
		cout << "Ingreso el numero 1";
		break;
	case 2:
		cout << "Ingreso el numero 2";
		break;
	case 3:
		cout << "Ingreso el numero 3";
    default:
		cout << "Ingreso cualquier numero";
	}
	cout << "Fin del switch";
	return 0;
}

