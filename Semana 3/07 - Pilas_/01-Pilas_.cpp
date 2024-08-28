#include <iostream>
#include <stack>
using namespace std;
int main (){
	stack<int> pila; 
	//pila de enteros
	int suma = 0;
	for (int i=1;i<=10;i++) 
		pila.push(i); 	//apilar de 1 a 10
	cout << "tamanio: " << pila.size() << endl;
	while (!pila.empty()) //mientras la pila no esté vacía
	{
		suma += pila.top(); //sumar el valor de la cima
		pila.pop(); //desapilar 1 elemento
	}
	cout << "total: " << suma << endl;
	return 0;
}