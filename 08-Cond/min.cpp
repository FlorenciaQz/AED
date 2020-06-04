/*
    Trabajo Práctico 08: Funciones y Operador Condicional
    Quiñonez Florencia Aylen
    05/28/2020
*/

#include <iostream>
#include <cassert>
using namespace std;

int valorMinimo(int, int);

int main()
{
    assert(5 == valorMinimo(5, 6));
    assert(0 == valorMinimo(1, 0));
    assert(0 == valorMinimo(0, 0));
    assert(-1 == valorMinimo(-1, 0));
    assert(-6 == valorMinimo(-5, -6));
}

int valorMinimo(int a, int b) {

    return a < b ? a : b; 

}
