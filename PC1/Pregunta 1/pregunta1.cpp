#include <iostream>
#include <vector>
#include <set>
#include <algorithm>
#include <numeric>
#include <cstdlib>
#include <ctime>
using namespace std;

// Funcion para verificar si un numero es perfecto
bool esPerfecto(int num) {
    int suma = 0;
    for (int i = 1; i <= num / 2; ++i) {
        if (num % i == 0) {
            suma += i;
        }
    }
    return suma == num;
}

// Función para generar numeros aleatorios entre 1 y 500
int numeroAleatorio() {
    return rand() % 500 + 1;
}

// Funcion para generar un contenedor con numeros aleatorios
vector<int> generarContenedor(int tam) {
    vector<int> contenedor;
    for (int i = 0; i < tam; ++i) {
        contenedor.push_back(numeroAleatorio());
    }
    return contenedor;
}

// Funcion para sumar los digitos de un número
int sumaDigitos(int num) {
    int suma = 0;
    while (num > 0) {
        suma += num % 10;
        num /= 10;
    }
    return suma;
}

// Funcion para verificar si un numero es primo
bool esPrimo(int num) {
    if (num <= 1) return false;
    for (int i = 2; i <= num / 2; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

// Función para generar la secuencia de números primos hasta un límite
vector<int> secuenciaPrimos(int limite) {
    vector<int> primos;
    for (int i = 2; i <= limite; ++i) {
        if (esPrimo(i)) {
            primos.push_back(i);
        }
    }
    return primos;
}

int main() {
    srand(time(0));

    // Generar los contenedores V1, V2 y V3
    vector<int> V1 = generarContenedor(rand() % 16 + 5);
    vector<int> V2 = generarContenedor(rand() % 16 + 5);
    vector<int> V3 = generarContenedor(rand() % 16 + 5);

    // Mostrar los contenedores generados
    cout << "V1: ";
    for (int num : V1) cout << num << " ";
    cout << endl;

    cout << "V2: ";
    for (int num : V2) cout << num << " ";
    cout << endl;

    cout << "V3: ";
    for (int num : V3) cout << num << " ";
    cout << endl;

    // Verificar números perfectos y sumar sus dígitos
    auto verificarPerfectosYSumarDigitos = [](const vector<int>& contenedor) {
        int sumaTotal = 0;
        for (int num : contenedor) {
            if (esPerfecto(num)) {
                sumaTotal += sumaDigitos(num);
            }
        }
        return sumaTotal;
    };

    int sumaV1 = verificarPerfectosYSumarDigitos(V1);
    int sumaV2 = verificarPerfectosYSumarDigitos(V2);
    int sumaV3 = verificarPerfectosYSumarDigitos(V3);

    cout << "Suma de dígitos de números perfectos:" << endl;
    cout << "V1: " << sumaV1 << endl;
    cout << "V2: " << sumaV2 << " (menor)" << endl;
    cout << "V3: " << sumaV3 << endl;

    // sumar elementos pares y determinar el mayor
    auto sumarPares = [](const vector<int>& contenedor) {
        return accumulate(contenedor.begin(), contenedor.end(), 0, [](int suma, int num) {
            return suma + (num % 2 == 0 ? num : 0);
        });
    };

    int sumaParesV1 = sumarPares(V1);
    int sumaParesV2 = sumarPares(V2);
    int sumaParesV3 = sumarPares(V3);

    cout << "Suma de elementos pares:" << endl;
    cout << "V1: " << sumaParesV1 << endl;
    cout << "V2: " << sumaParesV2 << endl;
    cout << "V3: " << sumaParesV3 << " (mayor)" << endl;

    // identificar elementos repetidos de V1 en V2 y V3
    cout << "Elementos repetidos de V1 en V2 y V3:" << endl;
    for (int num : V1) {
        int countNum = count(V2.begin(), V2.end(), num) + count(V3.begin(), V3.end(), num);
        if (countNum > 0) {
            cout << num << " se repite " << countNum << " veces" << endl;
        } else {
            cout << num << " no se repite" << endl;
        }
        if (countNum > 0) {
            cout << num << " se repite " << countNum << " veces" << endl;
        } else {
            cout << num << " no se repite" << endl;
        }
    }

    // secuencia de números primos del mayor elemento de todos los contenedores
    int mayorElemento = max({*max_element(V1.begin(), V1.end()), *max_element(V2.begin(), V2.end()), *max_element(V3.begin(), V3.end())});
    vector<int> primos = secuenciaPrimos(mayorElemento);

    cout << "Elemento mayor: " << mayorElemento << endl;
    cout << "Secuencia de numeros primos: ";
    for (int primo : primos) cout << primo << " ";
    cout << endl;

    return 0;
}