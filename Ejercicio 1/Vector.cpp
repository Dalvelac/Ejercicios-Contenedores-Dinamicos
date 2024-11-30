#include <iostream>
#include <vector>
#include <string>
#include <cctype>
#include "vector.h"
using namespace std;

// Declarar el vector fuera de la función para que mantenga su estado
vector<string> StockTienda = { "Camisa", "Pantalon", "Zapatos", "Corbata", "Chaqueta" };

bool esNumero(const string& entrada) {
    // Permitir números negativos y positivos
    if (entrada.empty()) return false;

    int start = 0;
    if (entrada[0] == '-' || entrada[0] == '+') {
        if (entrada.length() == 1) return false; // "-" o "+" solos no son válidos
        start = 1;
    }

    for (int i = start; i < entrada.size(); i++) {
        if (!isdigit(entrada[i])) {
            return false;
        }
    }

    return true;
}

void añadirElemento() {
    string nuevoElemento;

    while (true) {
        cout << "Introduce el nuevo elemento (Para salir escribe end): ";
        cin >> nuevoElemento;

        // Verificar si el usuario quiere salir
        if (nuevoElemento == "end") {
            return;
        }

        // Validar si la entrada es un número
        if (esNumero(nuevoElemento)) {
            cout << "Por favor, ingrese un valor valido (no numeros)." << endl;
            continue;
        }

        // Agregar el nuevo elemento al vector
        StockTienda.push_back(nuevoElemento);

        // Mostrar los elementos actuales del vector
        for (const auto& i : StockTienda) {
            cout << i << " ";
        }
        cout << endl << "Elemento agregado correctamente" << endl;
    }
}

