#include <iostream>
using namespace std;

void mensj1(int arr[], int n) {
	for (int i = 1; i < n; i++) {
		int llav = arr[i];
		int p = i - 1;
		while (p >= 0 && arr[p] > llav) {
			arr[p + 1] = arr[p];
			p = p - 1;
		}
		arr[p + 1] = llav;
	}
}

int main() {
	int arr[8] = {55, 22, 19, 13, 54, 65, 79, 390};
	int n = 8;
	
	mensj1(arr, n);
	
	cout << "Orden de arreglo: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	return 0;
}


