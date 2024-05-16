#include <iostream>
#include <cmath> 
using namespace std;

void mostrarMensaje() {
	system("cls");
	cout << "Hola por favor ingresa una opcion: " << endl;
	cout << "1. Llenar arreglo de atrás para adelante" << endl;
	cout << "2. Clonar un arreglo" << endl;
	cout << "3. Ingresar 10 números y convertir negativos a positivos" << endl;
	cout << "4. Crear arreglo de 5 números decimales y separar valores enteros y decimales" << endl;
}

void mensaje1(int arr[], int n) {
	for (int i = n - 1; i >= 0; i--) {
		cout << "Ingrese el valor para la posición " << i << ": ";
		cin >> arr[i];
	}
}

void mensaje2(int arr[], int num[], int n) {
	for (int i = 0; i < n; i++) {
		num[i] = arr[i];
	}
}

void mensaje3(int arr[], int n) {
	for (int i = 0; i < n; i++) {
		if (arr[i] < 0) {
			arr[i] = abs(arr[i]);
		}
	}
}

void mensaje4(float arr[], int ent[], float deci[], int n) {
	for (int i = 0; i < n; i++) {
		ent[i] = static_cast<int>(arr[i]);
		deci[i] = arr[i] - ent[i];
	}
}

int main() {
	int acc;
	int control = 1;
	
	do {
		mostrarMensaje();
		cin >> acc;
		
		if (acc == 1) {
			int n;
			cout << "Ingrese el número de elementos del arreglo: ";
			cin >> n;
			int* arr = new int[n];
			
			mensaje1(arr, n);
			cout << "Arreglo llenado de atrás para adelante: ";
			for (int i = 0; i < n; i++) {
				cout << arr[i] << " ";
			}
			cout << endl;
			
			delete[] arr;
		} else if (acc == 2) {
			int n;
			cout << "Ingrese el número de elementos del arreglo: ";
			cin >> n;
			int* arr = new int[n];
			int* num = new int[n];
			
			cout << "Ingrese los valores del arreglo: ";
			for (int i = 0; i < n; i++) {
				cin >> arr[i];
			}
			
			mensaje2(arr, num, n);
			cout << "Arreglo clonado: ";
			for (int i = 0; i < n; i++) {
				cout << num[i] << " ";
			}
			cout << endl;
			
			delete[] arr;
			delete[] num;
		} else if (acc == 3) {
			int arr[10];
			cout << "Ingrese 10 números (positivos o negativos): ";
			for (int i = 0; i < 10; i++) {
				cin >> arr[i];
			}
			
		  mensaje3(arr, 10);
			cout << "Arreglo con números negativos convertidos a positivos: ";
			for (int i = 0; i < 10; i++) {
				cout << arr[i] << " ";
			}
			cout << endl;
		} else if (acc == 4) {
			float arr[5];
			int ent[5];
			float deci[5];
			
			cout << "Ingrese 5 números decimales: ";
			for (int i = 0; i < 5; i++) {
				cin >> arr[i];
			}
			
			mensaje4(arr, ent, deci, 5);
			cout << "Valores enteros: ";
			for (int i = 0; i < 5; i++) {
				cout << ent[i] << " ";
			}
			cout << endl;
			
			cout << "Valores decimales: ";
			for (int i = 0; i < 5; i++) {
				cout << deci[i] << " ";
			}
			cout << endl;
		} else {
			cout << "Ingrese una opcion valida" << endl;    
		}
		
		cout << endl << "Desea continuar? 1. Si, 2. No: ";
		cin >> control;
		if (control != 1 && control != 2) {
			control = 1;
			cout << "Por favor siga instrucciones" << endl;
		}
	} while (control == 1);
	return 0;
}
