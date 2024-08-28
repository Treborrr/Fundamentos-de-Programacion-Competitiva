Ejercicio 1:
https://onlinejudge.org/index.php?option=onlinejudge&page=show_problem&problem=2113


#include<iostream>
using namespace std;
int main() {

	int n, a, b, i;
	cin >> n;
	for (i = 0; i < n; i++) 
	{
		cin >> a >> b;
		if (a > b) {
			cout << ">" << endl;
		}

		else if (a < b) {
			cout << "<" << endl;
		}
		else {
			cout << "=" << endl;
		}
	}
	return 0;
}




