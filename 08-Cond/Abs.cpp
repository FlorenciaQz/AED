/*
	Trabajo Práctico 08: Funciones y Operador Condicional
	Quiñonez Florencia Aylen
	05/28/2020
*/

#include <iostream>
#include <cassert>
using namespace std;


int valorAbsoluto(int);

int main(){

	assert(5 == valorAbsoluto(-5));
	assert(0 == valorAbsoluto(0));
	assert(5 == valorAbsoluto(5));

}

int valorAbsoluto(int x){

	return x < 0 ? -x : x;

}
