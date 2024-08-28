#include "iostream"
#include "conio.h"
using namespace std;
//Usando Clases como tipo de dato
class persona
{
public:
	string nombres;
	bool estado;

	persona()
	{
		this->nombres = "";
		this->estado = false;
	}
	~persona() {}
};
//Definimos el template
template <typename T>
T activar(T objeto)
{
	objeto.estado = true;
	return objeto;
}
int main()
{
	//Creamos la instancia con el estado falso
	persona* objPersona = new persona();
	objPersona->nombres = "Carlos";
	objPersona->estado = false;
	//Imprimimos el valor actual de estado
	cout << "Valor actual de estado: " << objPersona->estado << endl;
	//Usamos el método template
	*objPersona = activar<persona>(*objPersona);
	//Imprimimos el valor del nuevo estado
	cout << "Nuevo valor de estado: " << objPersona->estado;
	return 0;
}


