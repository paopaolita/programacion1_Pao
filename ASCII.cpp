#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	char letra;
	bool misus = false;
	bool masus = false;
	
	cout << "Ingrese una letra por favor: ";
	cin >> letra;
	
	if (letra >= 'a' && letra <= 'z') {
		misus = true;
		cout << "La letra ingresada es min�scula";
	}
	else if (letra >= 'A' && letra <= 'Z') {
		masus = true;
		cout << "La letra ingresada es may�scula";
	}

	return 0;
}

