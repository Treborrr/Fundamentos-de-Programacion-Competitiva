#include <iostream>
#include <map>
using namespace std;

int main()
{
	map<string, string> paises_moneda; 
	paises_moneda["Espana"] = "euro"; 
	paises_moneda["EEUU"] = "dolar"; 
	paises_moneda["Singapur"] = "dolar"; 
	paises_moneda["Inglaterra"] = "libra"; 
	paises_moneda["Egipto"] = "libra"; 
	cout << "La moneda usada en Egipto es: " << paises_moneda["Egipto"] << endl;
	return 0;
}
