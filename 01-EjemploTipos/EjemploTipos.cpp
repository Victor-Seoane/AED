// Alumno: Victor Nicolás Seoane
// Legajo : 204051-1

#include <string>   
#include <cassert> 

int main() 
{  
    // Tipo de dato: Booleano - Operaciones
    assert(true);
    assert(not false); 
    assert(true or false);
    assert(true and true);
    assert(not false or false);
    assert(not true or not false);
    assert(true and not false);
    assert(not true == false);
    assert(not false == true);
    assert(true != false);
    assert(false != true);
    assert(true == not false and true);
    assert(true == true or not false);
    assert(false ==  not true or false);
    
    // Tipo de dato: Caracter - Operaciones
    assert('a' == 'a');
    assert('a' != 'b');
    assert('a' + 'b' == 195);
    assert('a' + 'b' != 196);
    assert('c' - 'a' == 2 );
    assert('A'*'B' == 4290);
    assert('A'/'B' != 4290);
    assert('a' + 'b' > 194 and 'a' + 'b' < 196);
    assert('C' - 2 == 'A');
    assert('C' + 2 == 'E');
    
    // Tipo de dato: Entero - Operaciones
    assert(101 == 101);
    assert(101 != 102);
    assert(50 + 50 == 100);
    assert(50 - 45 == 5);
    assert(10 * 50 == 500);
    assert(600/60 == 10);
    assert(10 < 11 and 10 > 9);
    assert(10 == 5 + 5 or 6 + 4 == 10);
    
    // Tipo de dato: Punto flotante - Operaciones
    assert(1.0 == 1.0);
    assert(1.0 == 1);
    assert(1 == 0.1 * 10);
    assert(1.0 != 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1 + 0.1);
    assert(1.0 != 1.1);
    assert(0.1 > -2.0); 
    assert(1.5 + 1.5 == 3.0);
    assert(5.0 - 2.0 == 3.0);
    assert(8.0 * 4.0 == 32);
    assert(8.0/4.0 == 2.0);
    assert(4.0 * 3.0 > 11.0 and 4.0 * 3.0 < 13.0);
    assert(6.0 * 5.0 or 5.0 * 6.0 == 30.0);
    assert(7E3 == 7e3 );
    assert(7E3 == 7*10*10*10);
    assert(7E3 == 7000.0 );
    assert(7E6 == 7000000.0);
}
