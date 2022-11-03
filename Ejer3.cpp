//3_ Leer 3 número enteros y mostrarlos ascendentemente.

#include <iostream>

using namespace std;

int main()
{
	int a, b, c;

	cout << "Digita 3 numeros enteros.\n";
	cin >> a;
	cin >> b;
	cin >> c;

	if (a == b && a == c && b == c) {
		cout << a << " " << b << " " << c;
	}
	else {
		if (a > b) {
			if (a > c) {
				if (c > b) {
					cout << b << " " << c << " " << a;
				}
				else {
					cout << c << " " << b << " " << a;
				}
			}
			else {
				cout << b << " " << a << " " << c;
			}
		}
		else {
			if (b > c) {
				if (c > a) {
					cout << c << " " << c << " " << b;
				}
				else {
					cout << c << " " << a << " " << b;
				}
			}
			else {
				cout << a << " " << b << " " << c;
			}
		}
	}
}
