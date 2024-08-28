#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Candidato {
    string nombre;
    int votos;
};

int main() {
    int C;
    cout << "Ingrese el numero de candidatos: ";
    cin >> C;

    if (C < 0 || C > 10) {
        cout << "El numero de candidatos debe estar entre 0 y 10." << endl;
        return 1;
    }

    vector<Candidato> candidatos(C);

    for (int i = 0; i < C; ++i) {
        cout << "Ingrese el nombre del candidato " << i + 1 << ": ";
        cin >> candidatos[i].nombre;
        cout << "Ingrese el número de votos para " << candidatos[i].nombre << ": ";
        cin >> candidatos[i].votos;

        if (candidatos[i].votos < 0 || candidatos[i].votos > 500) {
            cout << "El numero de votos debe estar entre 0 y 500." << endl;
            return 1;
        }
    }

    // Mostrar el registro de los candidatos con sus votos respectivos
    cout << "\nRegistro de candidatos y sus votos:" << endl;
    for (const auto& candidato : candidatos) {
        cout << "Candidato: " << candidato.nombre << ", Votos: " << candidato.votos << endl;
    }

    // Imprimir los candidatos con votos menores a 50 y mayores a 300
    cout << "\nCandidatos con votos menores a 50:" << endl;
    for (const auto& candidato : candidatos) {
        if (candidato.votos < 50) {
            cout << "Candidato: " << candidato.nombre << ", Votos: " << candidato.votos << endl;
        }
    }

    cout << "\nCandidatos con votos mayores a 300:" << endl;
    for (const auto& candidato : candidatos) {
        if (candidato.votos > 300) {
            cout << "Candidato: " << candidato.nombre << ", Votos: " << candidato.votos << endl;
        }
    }

    // mostrar el candidato ganador
    auto ganador = max_element(candidatos.begin(), candidatos.end(), [](const Candidato& a, const Candidato& b) {
        return a.votos < b.votos;
    });

    if (ganador != candidatos.end()) {
        cout << "\nEl candidato ganador es: " << ganador->nombre << " con " << ganador->votos << " votos." << endl;
    }

    // Mostrar los candidatos que obtuvieron resultados impares
    cout << "\nCandidatos con votos impares:" << endl;
    for (const auto& candidato : candidatos) {
        if (candidato.votos % 2 != 0) {
            cout << "Candidato: " << candidato.nombre << ", Votos: " << candidato.votos << endl;
        }
    }

    return 0;
}