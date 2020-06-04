/*
    Trabajo Práctico 08: Funciones y Operador Condicional
    Quiñonez Florencia Aylen
    05/28/2020
*/

#include <iostream>
#include<cassert>
using namespace std;

int f(int);

int main()
{
    assert(0 == f(0));
    assert(3 == f(-3));
    assert(-3 == f(3));
    assert(4 == f(4));
    assert(-4 == f(-4));

}

int f(int x){

    return x <= 3 and x >= -3 ? -x : x;

}
