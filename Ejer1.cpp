//1_ Leer un número entero y determinar si tiene 3 dígitos.

#include <iostream>
using namespace std;

int main()
{

    int num;
    int cif = 1;

    cout << "Digita el numero a evaluar:\n";
    cin >> num;

    while (num >= 10) {

        num = num / 10;
        cif ++;
    }

    if (cif == 3) {
        cout << "el numero tiene 3 digitos";
    }

    if (cif > 3) {
        cout << "el numero tiene mas de 3 digitos.\n";
        cout << cif << " digitos en total.";
    }

    if (cif < 3) {
        cout << "el numero tiene menos de 3 digitos.\n";
        cout << cif << " digitos en total.";
    }

}
