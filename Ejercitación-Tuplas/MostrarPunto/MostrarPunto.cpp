
/* Enviar cualquier punto a la salida estandar 

Hipótesis:

Crear una estructura Punto compuesta por dos números reales y mostar el punto por consola.
 
Los puntos se mostrarán mediante la función MostrarPunto (void) que a su vez obtendrá la información de la función ObtenerPunto (void) que pedirá un input.

La forma de mostrar el punto será concatenando sus componentes en un cout. 

cout << "(" << p.x << ";" << p.y << ")"; 

Dominio del problema.

MostrarPunto: Punto --> [ ] --> Sigma*

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
