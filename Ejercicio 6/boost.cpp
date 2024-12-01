#include <iostream>
#include <boost/lexical_cast.hpp>
#include <boost/exception/diagnostic_information.hpp>

void usandoboost() {
    try {
        std::cout << "Introduce un numero: ";
        std::string input;
        std::cin >> input;

        int number = boost::lexical_cast<int>(input);
        std::cout << "El numero introducido es: " << number << std::endl;
    } catch (const boost::bad_lexical_cast &e) {
        std::cerr << "Error: Entrada invalida. No se pueden escribir caracteres que no sean numeros. " << e.what() << std::endl;
    }
}
