#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a�o;
	//no me salio :(((
   cout << "Ingrese un a�o: ";
	cin >> a�o;
	
	
	if ((a�o % 4 == 0 && a�o % 100 != 0) || (a�o % 400 == 0)) {
		cout << a�o << " es un a�o bisiesto." << endl;
	} else {
		cout << a�o << " no es un a�o bisiesto." << endl;
	}
	return 0;
}

