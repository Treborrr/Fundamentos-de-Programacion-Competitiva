#include "iostream"
#include "conio.h"
using namespace std;
template<typename T>
T suma(T a, T b) 
{
	return a + b;
}
int main() 
{
	double x = 10.5, y = 20.75;
	cout << "\nEntero: " << suma<int>(x, y)<<"\n";
	cout << "\nFloat: " << suma<float>(x, y) << "\n";
	cout << "\nDouble: " << suma<double>(x, y) << "\n";
	return 0;
}