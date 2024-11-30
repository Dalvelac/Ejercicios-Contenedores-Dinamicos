cmake_minimum_required(VERSION 3.29)
project(Ejercicios_Contenedores_Dinamicos)

set(CMAKE_CXX_STANDARD 14)

add_executable(Ejercicios_Contenedores_Dinamicos
    "Ejercicio 1/Vector.cpp"
        "Ejercicio 1/Vector.h"
        "Ejercicio 1/main.cpp")
add_executable(Contenedores
        "Ejercicio 2/Contenedores.cpp"
        "Ejercicio 2/Contenedores.h"
        "Ejercicio 2/main.cpp")
add_executable(Algoritmos
        "Ejercicio 3/main.cpp"
        "Ejercicio 3/Algoritmos.h"
        "Ejercicio 3/Algoritmos.cpp"
        "Ejercicio 4/main.cpp")

add_executable(ValArray
        "Ejercicio 4/ValArray.cpp"
        "Ejercicio 4/main.cpp")