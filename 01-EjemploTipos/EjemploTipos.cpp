* EjemploTipos.cpp
 * Ejemplos de Valores y Operaciones de Tipos de Datos
 * Seoane, Victor Nicolas 
 * 204031-1
  
#include <string>   
#include <cassert> 

int main() {  

    assert(true);                   // Verificamos si la constante booleana es verdadera.
    assert('x' != 'y');             // Verificamos que la constante caracter no es y.
    assert(433 == 433);             // Verificamos si la constante entera sin signo es igual a 433.
    assert(3.14159 > 3);           // Verificamos si la constante de punto flotante con doble precision es mayor a la constante entera.
    assert(10 == std::string("Algoritmos").length()); // Verificamos si la constante cadena de caracteres tiene 12 caracteres de largo.

}
