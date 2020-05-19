#include <iostream>
#include <cassert>
using namespace std;

int main()
{
    //Tipo de dato Int

    int notaA = 8;
    assert(8 == notaA);

    //Tipo de dato Unsigned

    unsigned notaB = 9;
    assert(9 == notaB);

    //Tipo de dato Double

    double notaC = 8.5; 
    double promedio = (double)(notaA + notaB + notaC) / 3;
    assert(8.5 == promedio);
    
    //Tipo de dato Bool

    bool Promocion; 
    if (promedio >= 7)
        Promocion = true;
    assert(true == Promocion);
        

    //Tipo de dato Char

    char a = '@';
    assert(64 == a);

    //Tipo de dato Int
    
    int b = 555;
    assert(555 == b);


    //Tipo de dato String

    string mail = "florenciagmail.com";
    mail.insert(9, 1, a);
    assert("florencia@gmail.com" == mail);
}
