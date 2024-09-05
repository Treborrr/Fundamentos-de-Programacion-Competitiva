// g++ -o example example.cpp
#include <iostream>
using namespace std;
int main(){

	return 0;
}
/**

Aquí tienes un programa para resolver cada ejercicio en C++:

### EJERCICIO 1: Salario Bonus

```cpp
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
```

### EJERCICIO 2: Fibonacci

```cpp
#include <iostream>
using namespace std;

int main() {
    int N;
    cin >> N;

    int a = 0, b = 1;

    for (int i = 0; i < N; i++) {
        if (i == 0) {
            cout << a;
        } else if (i == 1) {
            cout << " " << b;
        } else {
            int c = a + b;
            cout << " " << c;
            a = b;
            b = c;
        }
    }
    cout << endl;

    return 0;
}
```

### EJERCICIO 3: Billetes y Monedas

```cpp
#include <iostream>
using namespace std;

int main() {
    double N;
    int billetes, monedas;

    cin >> N;
    int valor = N * 100 + 0.5;  // Redondear para evitar problemas con los decimales

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
```

### EJERCICIO 4: Número Perfecto

```cpp
#include <iostream>
using namespace std;

bool esPerfecto(int n) {
    int suma = 0;
    for (int i = 1; i < n; i++) {
        if (n % i == 0) {
            suma += i;
        }
    }
    return suma == n;
}

int main() {
    int N, X;
    cin >> N;

    for (int i = 0; i < N; i++) {
        cin >> X;
        if (esPerfecto(X)) {
            cout << X << " es perfecto" << endl;
        } else {
            cout << X << " no es perfecto" << endl;
        }
    }

    return 0;
}
```

### EJERCICIO 5: Vector

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float A[100];

    for (int i = 0; i < 100; i++) {
        cin >> A[i];
    }

    for (int i = 0; i < 100; i++) {
        if (A[i] <= 10) {
            cout << "A[" << i << "] = " << fixed << setprecision(1) << A[i] << endl;
        }
    }

    return 0;
}
```

### EJERCICIO 6: Cartas Retiradas

```cpp
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n1, n2, n3, n4;
    cin >> n1 >> n2 >> n3 >> n4;

    vector<int> cartas;

    for (int i = 1; i <= n4; i++) {
        cartas.push_back(i);
    }

    cout << "Cartas retiradas: ";
    for (int i = 0; i < cartas.size(); i++) {
        if (cartas[i] % 2 != 0 && cartas[i] <= n1) {
            cout << cartas[i] << (i == cartas.size() - 1 ? "" : ", ");
        }
    }
    cout << endl << "Carta ingresada: " << n1 << endl;

    cout << "Cartas retiradas: ";
    for (int i = 0; i < cartas.size(); i++) {
        if (cartas[i] % 2 == 0 && cartas[i] <= n2) {
            cout << cartas[i] << (i == cartas.size() - 1 ? "" : ", ");
        }
    }
    cout << endl << "Carta ingresante: " << n2 << endl;

    cout << "Cartas retiradas: ";
    for (int i = 0; i < cartas.size(); i++) {
        if (cartas[i] % 3 == 0 && cartas[i] <= n3) {
            cout << cartas[i] << (i == cartas.size() - 1 ? "" : ", ");
        }
    }
    cout << endl << "Carta ingresante: " << n3 << endl;

    cout << "Resultados:\nCartas no retiradas: ";
    for (int i = 0; i < cartas.size(); i++) {
        if ((cartas[i] % 2 != 0 && cartas[i] > n1) && (cartas[i] % 2 == 0 && cartas[i] > n2) && (cartas[i] % 3 != 0 && cartas[i] > n3)) {
            cout << cartas[i] << (i == cartas.size() - 1 ? "" : ", ");
        }
    }
    cout << endl << "Carta ingresante: " << n4 << endl;

    return 0;
}
