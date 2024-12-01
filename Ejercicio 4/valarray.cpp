#include <iostream>
#include <valarray> // Incluye valarray para operaciones matemáticas
using namespace std;

// Crear un valarray de números decimales
valarray<float> varr = { 32.1, 22.23, 32.233, 412.4, 52.325 };

// Función para mostrar los elementos del valarray
void mostrarElementos(const valarray<float>& v) {
    for (const auto& i : v) {
        cout << i << " ";
    }
    cout << endl;
}

// Función para sumar un valor constante al valarray
void sumarConstante(float valor) {
    valarray<float> resultado = varr + valor;
    cout << "Resultado de sumar " << valor << " a cada elemento: ";
    mostrarElementos(resultado);
}

// Función para restar un valor constante al valarray
void restarConstante(float valor) {
    valarray<float> resultado = varr - valor;
    cout << "Resultado de restar " << valor << " a cada elemento: ";
    mostrarElementos(resultado);
}

// Función para multiplicar cada elemento del valarray por una constante
void multiplicarConstante(float valor) {
    valarray<float> resultado = varr * valor;
    cout << "Resultado de multiplicar cada elemento por " << valor << ": ";
    mostrarElementos(resultado);
}

// Función para dividir cada elemento del valarray por una constante
void dividirConstante(float valor) {
    if (valor == 0) {
        cout << "No se puede dividir por cero." << endl;
        return;
    }
    valarray<float> resultado = varr / valor;
    cout << "Resultado de dividir cada elemento por " << valor << ": ";
    mostrarElementos(resultado);
}

// Menú principal para elegir una operación
void menuOperaciones() {
    int opcion;
    float valor;

    while (true) {
        cout << "\nOpciones:\n";
        cout << "1. Sumar constante a cada elemento\n";
        cout << "2. Restar constante a cada elemento\n";
        cout << "3. Multiplicar cada elemento por una constante\n";
        cout << "4. Dividir cada elemento por una constante\n";
        cout << "5. Mostrar los elementos actuales\n";
        cout << "6. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Introduce el valor a sumar: ";
                cin >> valor;
                sumarConstante(valor);
                break;
            case 2:
                cout << "Introduce el valor a restar: ";
                cin >> valor;
                restarConstante(valor);
                break;
            case 3:
                cout << "Introduce el valor a multiplicar: ";
                cin >> valor;
                multiplicarConstante(valor);
                break;
            case 4:
                cout << "Introduce el valor a dividir: ";
                cin >> valor;
                dividirConstante(valor);
                break;
            case 5:
                cout << "Elementos actuales: ";
                mostrarElementos(varr);
                break;
            case 6:
                cout << "Saliendo del programa..." << endl;
                return;
            default:
                cout << "Opcion invalida. Intentalo de nuevo." << endl;
        }
    }
}
