https://github.com/Dalvelac/Ejercicios-Contenedores-Dinamicos/

# Ejercicios Contenedores Dinámicos

Este repositorio contiene una serie de ejercicios que exploran el uso de contenedores dinámicos y la biblioteca Boost en C++. A continuación se detalla cada ejercicio, explicando qué hace y cómo fue creado.


## Ejercicio 1: Vector

Este ejercicio explora el uso del contenedor std::vector en C++. Se creó una clase llamada Vector que contiene funcionalidades básicas para agregar, eliminar y acceder a los elementos de un vector.

### Archivos involucrados:

`Vector.cpp` – Implementación de la clase Vector.

`Vector.h` – Declaración de la clase Vector.

`main.cpp` – Programa principal que prueba las funcionalidades de la clase Vector.


## Ejercicio 2: Contenedores

En este ejercicio se introdujeron diferentes tipos de contenedores en C++ (como listas y colas) y se probaron en varios escenarios.

### Archivos involucrados:

`Contenedores.cpp` – Implementación de diferentes contenedores como std::list, std::queue, y otras estructuras de la biblioteca estándar.

`Contenedores.h` – Declaración de las funciones y contenedores utilizados.

`main.cpp` – Programa principal que prueba la funcionalidad de los contenedores.


## Ejercicio 3: Algoritmos

Este ejercicio está enfocado en algoritmos que pueden aplicarse a contenedores, tales como funciones de ordenación, búsqueda y manipulación.

### Archivos involucrados:

`Algoritmos.cpp` – Implementación de varios algoritmos aplicados a contenedores.

`Algoritmos.h` – Declaración de las funciones de algoritmos.

`main.cpp` – Programa principal que utiliza los algoritmos implementados.


## Ejercicio 4: ValArray

En este ejercicio se utilizó std::valarray, un contenedor especializado en la manipulación eficiente de arreglos de valores numéricos.

### Archivos involucrados:

`ValArray.cpp` – Implementación de operaciones usando std::valarray.

`ValArray.h` – Declaración de las funciones para manipular std::valarray.

`main.cpp` – Programa principal que prueba el uso del valarray.


## Ejercicio 5: Lambda y C++ Moderno

Este ejercicio está enfocado en las funcionalidades modernas de C++ como las funciones lambda para el manejo de contenedores.

### Archivos involucrados:

`lambda.cpp` – Implementación de código usando funciones lambda.

`lambda.h` – Declaración de las funciones lambda.

`main.cpp` – Programa principal que ejecuta los ejemplos de funciones lambda.


## Ejercicio 6: Introducción a Boost

Este ejercicio está enfocado en el uso de la biblioteca Boost, específicamente con la función boost::lexical_cast. Se demostró cómo convertir una cadena de caracteres en un número entero manejando posibles excepciones.

### Archivos involucrados:

`boost.cpp` – Implementación del uso de boost::lexical_cast.

`boost.h` – Declaración de las funciones relacionadas.

`main.cpp` – Programa principal que utiliza Boost para hacer la conversión.

### Compilación de Boost

Para poder utilizar Boost en estos ejercicios, es necesario compilar e instalar la biblioteca. Puedes seguir las instrucciones oficiales de Boost para la instalación:

#### Guía de instalación de Boost

Para compilar Boost en Windows:

1. Descarga el archivo ZIP desde Boost.

2. Extrae los archivos en una carpeta local.

3. Abre la terminal de comandos y navega al directorio donde extrajiste los archivos.

4. Ejecuta el comando:

`bootstrap.bat`

5. Luego, ejecuta:

`b2 install`

6. Esto compilará Boost y lo instalará en tu sistema.

#### Ejecución de los Ejercicios con CMakeLists (Recomendado)

Para compilar y ejecutar los ejercicios, simplemente utiliza CMake para generar los binarios y ejecuta los ejecutables generados en cada directorio correspondiente.

##### Ejemplo de compilación con CMake

1. Clona el repositorio en tu ordenador.

2. Navega al directorio donde clonaste el repositorio.

3. Crea un directorio para la construcción:

`mkdir build
cd build`

4. Ejecuta CMake:

`cmake ..`

5. Compila el proyecto:

`cmake --build .`

6. Ejecuta los binarios generados según el ejercicio que quieras probar.

