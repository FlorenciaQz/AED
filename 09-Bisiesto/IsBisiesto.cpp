#include <iostream>
#include <cassert>
using namespace std;

bool IsBisiesto(unsigned);

int main()
{
    assert(not IsBisiesto(20));
    assert(not IsBisiesto(1582));   
    assert(IsBisiesto(1584));
    assert(not IsBisiesto(1900));
    assert(IsBisiesto(2000));
    assert(IsBisiesto(2004));
    assert(IsBisiesto(2012));

}

bool IsBisiesto(unsigned a) {
    
    return a >= 1582 and (a % 4 == 0 and a % 100 != 0) or (a % 400 ==0);

}
