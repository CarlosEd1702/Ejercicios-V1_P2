//2_ Leer un número entero de 3 dígitos y determinar en que posición está el dígito mayor.

#include <iostream>
using namespace std;

int main()
{
	int num;
	int a, b, c;

	cout << "Escribe un numero de 3 digitos.\n";
	cout << "Yo te dire en que posicion esta el numero con mayor denominacion.\n";
	cin >> num;
	cout << "\n";

	if (num >= -999 && num <= 999) {

		a = num % 1000 / 100;
		b = num % 100 / 10;
		c = num % 10 / 1;

		cout << "A  " << "B  " << "C  \n";
		cout << a << "  " << b << "  " << c << "  \n";
		cout << "\n";

		if (a == b && a == c && b == c) {
			cout << "Todos tienen el mismo valor.\n";
		}
		else {
			if (a == b) {
				if (a > c) {
					cout << "A y B tienen los valores mas altos.\n";
				}
				else {
					cout << "C tiene el valor mas alto.\n";
				}
			}
			else {
				if (a == c) {
					if (a > b) {
						cout << "A y C tienen los valores mas altos.\n";
					}
					else {
						cout << "B tiene el valor mas alto.\n";
					}
				}
				else {
					if (c == b) {
						if (c > a) {
							cout << "B y C tienen los valores mas altos.\n";
						}
						else {
							cout << "A tiene el valor mas alto.\n";
						}
					}
					else {
						if (a > b) {
							if (a > c) {
								cout << "A tiene el valor mas alto.\n";
							}
							else {
								cout << "C tiene el valor mas alto.\n";
							}
						}
						else {
							if (b > c) {
								cout << "B tiene el valor mas alto.\n";
							}
							else {
								cout << "C tiene el valor mas alto.\n";
							}
						}
					}
				}
			}
		}
	}
	else {
		cout << "El numero que ingresaste tiene mas de 3 digitos. Lo siento.\n";
	}
}
