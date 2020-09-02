
/* Enviar cualquier punto a la salida estandar 

Hipótesis: El usuario deberá ingresar uno a uno los componentes de la estructura Punto
por consola, y ambos serán mostrados en conjunto por consola.

*/

#include <iostream>
#include <cassert>
using namespace std;


struct Punto {
    double x, y;
};

void MostrarPunto(Punto);

Punto ObtenerPunto();


int main() {

    MostrarPunto(ObtenerPunto());

}

void MostrarPunto(Punto p) {

    cout << "(" << p.x << ";" << p.y << ")";

}

Punto ObtenerPunto() {

    Punto p;

    cin >> p.x;
    cin >> p.y;

    return p;

}
