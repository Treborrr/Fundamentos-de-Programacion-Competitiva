Ejercicio 1:
https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2113

#include<iostream>
using namespace std;
int main() {
	int i, t;
	cin >> t;

	for (i = 0; i < t; i++)
	{
		int x, y;
		cin >> x >> y;
		if (x == y) cout << "=";
		else if (x > y) cout << ">";
		else cout << "<";

		cout << endl;
	}
	
	
	return 0;
}




