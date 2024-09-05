#include <iostream>

#include <iomanip>
#include <string.h>

#define approx(x) fixed <<setprecision(x)

using namespace std;

int main()
{

	long double n;

	long double billetes[9] = { 0,100,50,20,10,5,2,1,0.5 };

	do {

		cin >> n;

	} while (n>1000000 or n<0);

	long double suma = 0;

	int frecuencia[9];

	memset(frecuencia, 0, sizeof(frecuencia));

	for (int i = 1; i <= 8; i++)

	{

		while (suma < n)

		{

			suma += billetes[i], frecuencia[i]++;

		}

		if (suma > n)

			suma -= billetes[i], frecuencia[i]--;

	}

	cout << "NOTAS: " << endl;

	cout << approx(2);

	for (int i = 1; i <= 6; i++)

	{

		cout << frecuencia[i] << "\t"

			<< "nota(s)"

			<< "\t"

			<< "de"

			<< "\t"

			<< "R$"

			<< "\t" << billetes[i] << endl;

	}

	cout << "MONEDAS: " << endl;

	for (int i = 7; i <= 8; i++)

	{

		cout<<frecuencia[i]<<"\t"

			<< "moneda(s)"

			<< "\t"

			<< "de"

			<< "\t"

			<< "R$"

			<< "\t" << billetes[i] << endl;



	}

	return 0;

}
/**  
int main() {
    double N;
    int billetes, monedas;

    cin >> N;
    int valor = N * 100 + 0.5;  

    cout << "NOTAS:" << endl;
    billetes = valor / 10000;
    cout << billetes << " nota(s) de R$ 100.00" << endl;
    valor %= 10000;

    billetes = valor / 5000;
    cout << billetes << " nota(s) de R$ 50.00" << endl;
    valor %= 5000;

    billetes = valor / 2000;
    cout << billetes << " nota(s) de R$ 20.00" << endl;
    valor %= 2000;

    billetes = valor / 1000;
    cout << billetes << " nota(s) de R$ 10.00" << endl;
    valor %= 1000;

    billetes = valor / 500;
    cout << billetes << " nota(s) de R$ 5.00" << endl;
    valor %= 500;

    billetes = valor / 200;
    cout << billetes << " nota(s) de R$ 2.00" << endl;
    valor %= 200;

    cout << "MONEDAS:" << endl;

    monedas = valor / 100;
    cout << monedas << " moneda(s) de R$ 1.00" << endl;
    valor %= 100;

    monedas = valor / 50;
    cout << monedas << " moneda(s) de R$ 0.50" << endl;

    return 0;
}
*/