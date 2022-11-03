//6_ Leer un número entero de tres dígitos y determinar si alguno de sus dígitos es igual a la suma de los otros dos.

#include <iostream>

using namespace std;

int main()
{
	int num;
	int a, b, c;

	cout << "Ingresa un numero de tres digitos.\n";
	cin >> num;

	if (num > 100 && num < 999) {

		a = num % 1000 / 100;
		b = num % 100 / 10;
		c = num % 10 / 1;

		cout << "A  " << "B  " << "C  \n";
		cout << a << "  " << b << "  " << c << "  \n";
		cout << "\n";

		if ((b + c) != a && (a + c) != b && (a + b) != c) {
			cout << "Ningun digito es igual a la suma de los otros 2.\n";
		}

		if ((b+c) == a) {
			cout << "La suma de B + C es igual al valor de A.\n";
		}

		if ((a + c) == b) {
			cout << "La suma de A + C es igual al valor de B.\n";
		}

		if ((a + b) == c) {
			cout << "La suma de A + B es igual al valor de C.\n";
		}
	}

	else {
		cout << "El numero no cuenta con 3 digitos.\n";
	}

}
