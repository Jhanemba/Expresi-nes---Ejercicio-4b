/*
Ejercicio 4: Escribe la siguiente expresión como expresión en C++:
()
*/
#include <iostream>
using namespace std;

int main()
{
	double a, b, c, d;
	double resultado = 0;

	cout << "Intoduzca a: \n"; cin >> a;
	cout << "Intoduzca b: \n"; cin >> b;
	cout << "Intoduzca c: \n"; cin >> c;
	cout << "Intoduzca d: \n"; cin >> d;

	resultado = (a + (b / (c - d)));

	cout.precision(5);//Para evitar problemas, uso este redondeo más que todo como filtro por si en algún caso los decimales son muy grandes.
	cout << "El resultado es: " << resultado << endl;

	return 0;
}