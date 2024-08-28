#include <iostream>
#include <queue>
using namespace std;
int main ()
{
	queue<int> cola; //cola de enteros
	int suma = 0;
	for (int i=1;i<=10;i++) 
		cola.push(i); //encolar de 1 a 10
	cout << "tamanio: " << cola.size() << endl;
	while (!cola.empty()) //mientras la cola no esté vacía
	{
		suma += cola.front(); //sumar el valor del primero de la cola
		cola.pop(); //desencolar 1 elemento
	}
	cout << "total: " << suma << endl;
	return 0;
}