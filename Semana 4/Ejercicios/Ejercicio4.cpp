#include <iostream>
using namespace std;

bool esPerfecto(int num) {
    if (num <= 1) return false; 
    int suma = 0;
    for (int i = 1; i <= num / 2; i++) {
        if (num % i == 0) {
            suma += i;
        }
    }
    return suma == num;
}

int main(void) {
    int N;
    cin >> N;

    for (int i = 0; i < N; i++) {
        int num; 
        cin >> num;

        cout << num << " ";
        if (esPerfecto(num)) {
            cout << "es perfecto" << endl;
        } else {
            cout << "no es perfecto" << endl;
        }
    }
    return 0;
}