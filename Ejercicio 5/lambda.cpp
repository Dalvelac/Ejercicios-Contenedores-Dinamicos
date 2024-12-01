#include "lambda.h"
#include <vector>
#include <iostream>
#include <numeric>

using namespace std;

void CuadradoLambda(int valor)
{
    auto cuadrado = [](int valor) { return valor * valor; };
    cout << "El cuadrado de " << valor << " es: " << cuadrado(valor) << endl;
}

void LambdaConParametros()
{
    vector<int> numeros = {1, 2, 3, 4, 5};

    // Lambda que recibe un vector y un entero
    auto imprimirMultiplicados = [](const vector<int>& v, int x) {
        for (const auto& i : v) {
            cout << i * x << " ";
        }
        cout << endl;
    };

    int multiplicador;
    cout << "Introduce el valor a multiplicar: ";
    cin >> multiplicador;

    imprimirMultiplicados(numeros, multiplicador);
}

void LambdaConCaptura()
{
    int x = 10;
    int y = 20;

    // Lambda que captura x e y por valor
    auto suma = [x, y]() {
        return x + y;
    };

    cout << "La suma de x e y es: " << suma() << endl;
}

void LambdaFactorial()
{
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    // Lambda para calcular el factorial
    int f = accumulate(begin(arr), end(arr), 1, [](int x, int y) { return x * y; });

    cout << "El factorial del arreglo (hasta 10) es: " << f << endl;
}

void MenuLambda()
{
    int opcion;
    int valor;

    while (true) {
        cout << "\nOpciones:\n";
        cout << "1. Cuadrado de un numero\n";
        cout << "2. Lambda con parametros\n";
        cout << "3. Lambda con captura\n";
        cout << "4. Factorial\n";
        cout << "5. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << "Introduce el valor a elevar al cuadrado: ";
                cin >> valor;
                CuadradoLambda(valor);
                break;
            case 2:
                LambdaConParametros();
                break;
            case 3:
                LambdaConCaptura();
                break;
            case 4:
                LambdaFactorial();
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                return;
            default:
                cout << "Opcion invalida. Intentalo de nuevo." << endl;
        }
    }
}