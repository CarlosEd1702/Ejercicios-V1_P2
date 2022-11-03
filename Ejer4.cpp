//4_ Leer dos número enteros de 2 dígitos cada uno y determinar en cual de ellos se encuentra el dígito mayor.
#include <iostream>
using namespace std;

int main()
{
	int a, b;
	int PA, Pa; 
	int SB, Sb;
	int ma, mb;

	cout << "Digite 2 numeros de 2 digitos cada uno: \n";
	cin >> a;
	cin >> b;

	if (a > 10 && a <= 99 && b > 10 && b <= 99) {

		PA = a % 100 / 10;
		Pa = a % 10 / 1;
		SB = b % 100 / 10;
		Sb = b % 10 / 1;

		if (PA == Pa) {
			ma = PA;
		}
		else {
			if(PA > Pa){
				ma = PA;
			}
			else {
				ma = Pa;
			}
		}
		if (SB == Sb) {
			mb = SB;
		}
		else {
			if (SB > Sb) {
				mb = SB;
			}
			else {
				mb = Sb;
			}
		}
		if (ma == mb) {
			cout << "El digito mas alto esta en ambos numeros.\n";
		}
		else {
			if (ma > mb) {
				cout << "El primer numero tiene el digito mas grande, que es: " << ma;
			}
			else {
				cout << "El segundo numero tiene el digito mas grande, que es: " << mb;
			}
		}

	}
	else {
		cout << "Solo se admiten numeros de dos digitos.\n";
	}
}

