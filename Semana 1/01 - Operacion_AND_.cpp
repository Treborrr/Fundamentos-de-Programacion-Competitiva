//OPERACION AND
#include <iostream>
using namespace std;

int main()
{
	//Declarando las variables
	int nro1, nro2, resultado;
	//Ingresando los datos
	cout << "Ingresar el numero 1: ";
	cin >> nro1;
	cout << "Ingresar el numero 2: ";
	cin >> nro2;
	//Procesando los datos
	resultado = nro1 & nro2;
	//Mostrando el resultado
	cout << "El resultado es: " << resultado;

	return 0;
}