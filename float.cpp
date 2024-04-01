#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	//como declarar variables float
	float total; //10.0
	float gastado; //5.59
	float vuelto; //4.41
	cout << "Ingrese un total del producto: ";
	cin >> total;
	cout << "Ingrese lo gastado: ";
	cin >> gastado;
	vuelto = total - gastado;
	cout << "El vuelto es: " << vuelto;
	return 0;
}

