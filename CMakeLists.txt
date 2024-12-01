cmake_minimum_required(VERSION 3.29)
project(Ejercicios_Contenedores_Dinamicos)
set(CMAKE_CXX_STANDARD 14)

# Añade la ruta de Boost
set(BOOST_ROOT "D:/boost_1_86_0")

# Busca la librería Boost en la ruta especificada
find_package(Boost 1.86.0 REQUIRED)

# Si se encuentra Boost, agrega sus directorios de inclusión
if(Boost_FOUND)
    include_directories(${Boost_INCLUDE_DIRS})
endif()

# Agrega los ejecutables y vincula Boost si es necesario
add_executable(Ejercicios_Contenedores_Dinamicos
        "Ejercicio 1/Vector.cpp"
        "Ejercicio 1/Vector.h"
        "Ejercicio 1/main.cpp")

if(Boost_FOUND)
    target_link_libraries(Ejercicios_Contenedores_Dinamicos ${Boost_LIBRARIES})
endif()

add_executable(Contenedores
        "Ejercicio 2/Contenedores.cpp"
        "Ejercicio 2/Contenedores.h"
        "Ejercicio 2/main.cpp")

if(Boost_FOUND)
    target_link_libraries(Contenedores ${Boost_LIBRARIES})
endif()

add_executable(Algoritmos
        "Ejercicio 3/Algoritmos.h"
        "Ejercicio 3/Algoritmos.cpp"
        "Ejercicio 3/main.cpp")

if(Boost_FOUND)
    target_link_libraries(Algoritmos ${Boost_LIBRARIES})
endif()

add_executable(ValArray
        "Ejercicio 4/ValArray.cpp"
        "Ejercicio 4/ValArray.h"
        "Ejercicio 4/main.cpp")

if(Boost_FOUND)
    target_link_libraries(ValArray ${Boost_LIBRARIES})
endif()

add_executable(cppmoderno
        "Ejercicio 5/lambda.cpp"
        "Ejercicio 5/lambda.h"
        "Ejercicio 5/main.cpp")

add_executable(boost
        "Ejercicio 6/boost.cpp"
        "Ejercicio 6/boost.h"
        "Ejercicio 6/main.cpp")

if(Boost_FOUND)
    target_link_libraries(cppmoderno ${Boost_LIBRARIES})
endif()
