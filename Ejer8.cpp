//8_ Leer un número entero de 4 dígitos  y determinar si tiene más dígitos pares o impares. 

#include <iostream>

using namespace std;

int main()
{
	int num;
	int a, b, c, d;
	int pa = 0;
	int im = 0;

	cout << "Ingresa un numero de tres digitos.\n";
	cin >> num;

	if (num > 1000 && num < 9999) {

		a = num % 10000 / 1000;
		b = num % 1000 / 100;
		c = num % 100 / 10;
		d = num % 10 / 1;

		if ((a % 2) == 0) {
			pa++;
		}
		else {
			im++;
		}
		if ((b % 2) == 0) {
			pa++;
		}
		else {
			im++;
		}
		if ((c % 2) == 0) {
			pa++;
		}
		else {
			im++;
		}
		if ((d % 2) == 0) {
			pa++;
		}
		else {
			im++;
		}
		if (pa > im) {
			cout << "El numero tiene mas digitos pares.\n";
		}
		else {
			if (pa < im) {
				cout << "El numero tiene mas digitos impares.\n";
			}
			else {
				cout << "El numero tiene la misma cantidad de pares e impares.\n";
			}
		}

		cout << "\nPares: " << pa << "\n";
		cout << "Impares: " << im << endl;

	}

	else {
		cout << "El numero no cuenta con 4 digitos.\n";
	}
}

