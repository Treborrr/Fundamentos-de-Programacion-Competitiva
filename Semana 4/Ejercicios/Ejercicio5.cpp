// Ejercicio 5: Vector
#include <iostream>
#include <iomanip>
//random
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0));
    float A[100];
    
// Rellenar el arreglo con números aleatorios
    for (int i = 0; i < 100; i++) {
        A[i] = static_cast<float>(rand()) / (static_cast<float>(RAND_MAX / 100.0)); // Números aleatorios entre 0 y 100
    }

/* 
    for (int i = 0; i < 100; i++) {
        cin >> A[i];
    }
*/

    for (int i = 0; i < 100; i++) {
        if (A[i] <= 10) {
            cout << "A[" << i << "] = " << fixed << setprecision(1) << A[i] << endl;
        }
    }

    return 0;
}