#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	cout << "�Trabaja en la empresa? 1. Si, 2. No" << endl;
	int vivo;
	cin >> vivo;
	if (vivo == 1) {
		cout <<"BIENVENIDO A LA PAGINA DEL BONO NAVIDE�O" << endl;
		cout << "�Cuantos a�os tiene trabajando en la empresa?" << endl;
		int chamba;
		cin >> chamba;
		if (chamba <= 5) {
			cout << "Su sueldo �Cu�nto es? ";
			double dinero;
			cin >> dinero;
			double bono = (dinero) * 0.05;
			double doblechamba = dinero + bono;
			cout << "Su bono es: " << doblechamba;
		}
		else if (chamba > 5) {
			cout << "Su sueldo �Cu�nto es? ";
			double dinero;
			cin >> dinero;
			double bono = (dinero) * 0.10;
			double doblechamba = dinero + bono;
			cout << "Su bono es: " << doblechamba;
		}
	}
	else {
		cout << "Entonces por qu� pregunta xd";
	}
	return 0;
}

