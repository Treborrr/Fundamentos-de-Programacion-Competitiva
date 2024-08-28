#include <iostream>
#include <vector>
using namespace std;

int main()
{
	//declarar vector
	vector<int> punts_equipos;
	int numEquipos; 
	cin >> numEquipos; 
	while (numEquipos > 0) 
	{
		int puntos; 
		cin >> puntos; 
		//agregar un elemento al final
		punts_equipos.push_back(puntos); 
		//eliminar ultimo elemento
		//numEquipos = numEquipos - 1;
		//punts_equipos.pop_back(); 
		//obtener primer elemento
		//punts_equipos.front(); 
		// obtener el ultimo elemento
		//cout<<punts_equipos.back(); 
		//eliminarelemento en posición pos
		//punts_equipos.erase(punts_equipos.begin() + pos); 
		numEquipos--;

	}
	cout << "El numero de puntos por equipo es: " << punts_equipos.size();
	return 0;
}
