#include <list>
#include <stack>
#include <iostream>
using namespace std;

void MenuCalificaciones() {
    // Declarar la lista global para almacenar calificaciones
    list<float> Calificaciones;

    // Crear un adaptador de stack basado en la lista
    stack<float, list<float>> PilaCalificaciones(Calificaciones);

    int opcion; // Variable para almacenar la opción del usuario

    while (true) {
        // Mostrar el menú de opciones
        cout << "\nOpciones:\n";
        cout << "1. Agregar calificacion\n";
        cout << "2. Mostrar calificaciones\n";
        cout << "3. Eliminar ultima calificacion\n";
        cout << "4. Salir\n";
        cout << "Selecciona una opcion: ";
        cin >> opcion;

        // Manejar las opciones del menú
        switch (opcion) {
            case 1: {
                // Agregar calificación
                float calificacion;
                cout << "Introduce la calificacion: ";
                cin >> calificacion;
                PilaCalificaciones.push(calificacion); // Añadir a la pila
                cout << "Calificacion añadida correctamente." << endl;
                break;
            }
            case 2: {
                // Mostrar calificaciones
                if (PilaCalificaciones.empty()) {
                    cout << "No hay calificaciones para mostrar." << endl;
                } else {
                    cout << "Calificaciones (de la mas reciente a la mas antigua): ";
                    stack<float, list<float>> copiaPila = PilaCalificaciones; // Copiar la pila para no modificarla
                    while (!copiaPila.empty()) {
                        cout << copiaPila.top() << " ";
                        copiaPila.pop();
                    }
                    cout << endl;
                }
                break;
            }
            case 3: {
                // Eliminar la última calificación
                if (PilaCalificaciones.empty()) {
                    cout << "No hay calificaciones para eliminar." << endl;
                } else {
                    cout << "Eliminando la ultima calificación: " << PilaCalificaciones.top() << endl;
                    PilaCalificaciones.pop(); // Eliminar el tope de la pila
                }
                break;
            }
            case 4:
                // Salir del programa
                cout << "Saliendo del programa..." << endl;
                return;
            default:
                // Manejar opciones inválidas
                cout << "Opcion invalida. Inténtalo de nuevo." << endl;
        }
    }
}
