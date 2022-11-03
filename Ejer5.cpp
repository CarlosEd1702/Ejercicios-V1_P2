//5_Leer un número entero de 3 dígitos y determinar cuántos dígitos pares tiene
#include <iostream>
using namespace std;

int main()
{
	int num;
	int a, b, c;
	int pa = 0;
	int im = 0;

	cout << "Ingresa un numero de tres digitos.\n";
	cin >> num;

	if (num > 100 && num < 999) {

		a = num % 1000 / 100;
		b = num % 100 / 10;
		c = num % 10 / 1;

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

		cout << "Pares: " << pa << endl;
		cout << "Impares: " << im << endl;

	}

	else {
		cout << "El numero no cuenta con 3 digitos.\n";
	}
}

