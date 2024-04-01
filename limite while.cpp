#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int num1 = 0, num2 = 0, num3 = 0;
	cout << "Ingrese un numero por favor: ";
	cin >> num3;
	num1 = 0;
	while (num1 < num3) {
		cout << "Aun no llegamos al limite: " << num1 << endl;
		num1++;
	}
	return 0;
}

