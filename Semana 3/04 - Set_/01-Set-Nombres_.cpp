#include <iostream>
#include <set>
using namespace std;

int main()
{
	set<string> s_nombres;
	//declarar set
	string nombre;
	int i = 0;
	while (i < 5) {
		cin >> nombre; 
		s_nombres.insert(nombre); //insertar elemento
		//s_nombres.erase(nombre); //eliminar elemento
		i = i + 1;
	}
	cout << "Numero de elementos en set: " <<s_nombres.size() << endl; //tamaño set


	return 0;
}
