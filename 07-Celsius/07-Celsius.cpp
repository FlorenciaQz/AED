/*
    Trabajo Práctico 07 : Celsius
    Quiñonez Florencia Aylen
    06/03/2020
*/

#include <iostream>
#include <cassert>
using namespace std;

double Celsius(double);
bool AreNear(double, double, double);


int main()
{
    assert(AreNear(Celsius(-20), -28.889, 0.001));
    assert(AreNear(Celsius(-16), -26.667, 0.001));
    assert(AreNear(Celsius(0), -17.778, 0.001));
    assert(AreNear(Celsius(7), -13.889, 0.001));
    assert(AreNear(Celsius(19), -7.222, 0.001));
    assert(AreNear(Celsius(32), 0, 0.001));
    assert(AreNear(Celsius(38), 3.333, 0.001));
    assert(AreNear(Celsius(39), 3.888, 0.001));
    assert(not AreNear(Celsius(-20), -30.000, 0.001));
    assert(not AreNear(Celsius(-16), -28, 0.001));
    assert(not AreNear(Celsius(0), -17.799, 0.001));
}

double Celsius(double fahrenheit) {

    return (5.0 * (fahrenheit - 32)) / 9.0;

}

bool AreNear(double a, double b, double tol) {

    return abs(a - b) <= tol;
}
