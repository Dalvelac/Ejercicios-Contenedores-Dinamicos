#include "Algoritmos.h"

#include <iostream>
#include <vector>
#include <string>
#include <algorithm> // Para usar std::sort
#include <cctype>
using namespace std;

// Declarar el vector fuera de la funcion para que mantenga su estado
vector<int> Calificaciones;

bool esNumero(const string& entrada) {
    // Verificar si la cadena es un numero valido
    if (entrada.empty()) return false;

    int start = 0;
    if (entrada[0] == '-' || entrada[0] == '+') {
        if (entrada.length() == 1) return false; // "-" o "+" solos no son validos
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
        cout << "Introduce el nuevo elemento (Para salir escribe 'end'): ";
        cin >> nuevoElemento;

        // Verificar si el usuario quiere salir
        if (nuevoElemento == "end") {
            return;
        }

        // Validar si la entrada no es un numero
        if (!esNumero(nuevoElemento)) {
            cout << "Por favor, ingrese un valor valido (solo numeros enteros)." << endl;
            continue;
        }

        // Convertir el string a int y agregarlo al vector
        int elemento = stoi(nuevoElemento);
        Calificaciones.push_back(elemento);

        // Mostrar los elementos actuales del vector
        cout << "Elementos actuales en el vector: ";
        for (const auto& i : Calificaciones) {
            cout << i << " ";
        }
        cout << endl << "Elemento agregado correctamente." << endl;
    }
}

void ordenarCalificaciones() {
    if (Calificaciones.empty()) {
        cout << "No hay calificaciones para ordenar." << endl;
        return;
    }

    int opcion;
    cout << "\nElige el tipo de ordenacion:\n";
    cout << "1. Orden ascendente (de menor a mayor)\n";
    cout << "2. Orden descendente (de mayor a menor)\n";
    cout << "Selecciona una opcion: ";
    cin >> opcion;

    if (opcion == 1) {
        // Orden ascendente
        sort(Calificaciones.begin(), Calificaciones.end());
        cout << "Calificaciones ordenadas de menor a mayor: ";
    } else if (opcion == 2) {
        // Orden descendente
        sort(Calificaciones.begin(), Calificaciones.end(), greater<int>());
        cout << "Calificaciones ordenadas de mayor a menor: ";
    } else {
        cout << "Opcion invalida." << endl;
        return;
    }

    // Mostrar los elementos ordenados
    for (const auto& i : Calificaciones) {
        cout << i << " ";
    }
    cout << endl;
}

void elementomaximo() {
    if (Calificaciones.empty()) {
        cout << "No hay calificaciones." << endl;
        return;

    } else {
        cout << "Calificacion maxima: " << *max_element(Calificaciones.begin(), Calificaciones.end()) << endl;
    }

}

void MenuCalificaciones() {
    int opcion;

    while (true) {
        cout << "\nOpciones:\n";
        cout << "1. Agregar calificacion\n";
        cout << "2. Mostrar calificaciones\n";
        cout << "3. Ordenar calificaciones\n";
        cout << "4. Calificacion maxima\n";
        cout << "5. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                añadirElemento();
                break;
            case 2:
                if (Calificaciones.empty()) {
                    cout << "No hay calificaciones para mostrar." << endl;
                } else {
                    cout << "Calificaciones actuales: ";
                    for (const auto& i : Calificaciones) {
                        cout << i << " ";
                    }
                    cout << endl;
                }
                break;
            case 3:
                ordenarCalificaciones();
                break;
            case 4:
                elementomaximo();
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                return;
            default:
                cout << "Opcion invalida. Intentalo de nuevo." << endl;
        }
    }
}
