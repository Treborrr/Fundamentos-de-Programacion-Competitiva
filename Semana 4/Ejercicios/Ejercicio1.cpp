#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string nombre;
    double salarioFijo, totalVentas, salarioFinal;

    cin >> nombre;
    cin >> salarioFijo >> totalVentas;

    salarioFinal = salarioFijo + (totalVentas * 0.15);

    cout << fixed << setprecision(2);
    cout << "TOTAL = R$ " << salarioFinal << endl;

    return 0;
}
