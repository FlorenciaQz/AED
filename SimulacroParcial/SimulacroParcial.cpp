/*Desarrolle una función que dada una hora indique si es una hora de la mañana, tarde o noche. 
Considere el tipo de dato de argumentos y de retorno, también las precondiciones. 

Hipótesis: 

La función ClasificarHora tendrá como entrada una hora expresada en reloj de 24 horas, 
respetando el formato HH:MM. Es decir, 07:22, 19:22, etc. Este tipo de dato será un struct, 
con los componentes horas y minutos.

La función tomará como mañana, tarde y noche las horas que respeten ciertas condiciones:

Mañana: Desde 06:00(Inclusive) hasta 12:00
Tarde: Desde 12:00 (Inclusive) hasta 19:00
Noche: Desde 19:00 (Inclusive) hasta 12:00

Los valores Mañana, Tarde y Noche se guardarán en un Enum. 

La función tendrá como entrada el Struct Hora y como salida un elemento 
del tipo de dato "Clasif" (struct enum). 

Sólo se trabajará con el primer componente del struct de entrada,
 ya que esos datos son suficientes para definir a qué clasificación corresponde 
 cada horario ingresado.

1- Diseñe el modelo IPO. 

 Clasif -> ClasificarHora -> String

*/

#include <iostream>
#include <cassert>
using namespace std;


enum struct Clasif{Manana, Tarde, Noche};

struct Hora{
    int horas, minutos;
};

Clasif ClasificarHora(Hora);


int main(){

    assert(Clasif::Manana == ClasificarHora({06,00}));
    assert(Clasif::Manana == ClasificarHora({07,00}));
    assert(Clasif::Manana == ClasificarHora({11,59}));
    assert(Clasif::Manana != ClasificarHora({12,00}));
    assert(Clasif::Tarde == ClasificarHora({12,00}));
    assert(Clasif::Tarde == ClasificarHora({15,55}));
    assert(Clasif::Tarde != ClasificarHora({19,00}));
    assert(Clasif::Noche == ClasificarHora({19,01}));
    assert(Clasif::Noche == ClasificarHora({00,00}));
    assert(Clasif::Noche != ClasificarHora({06,00}));

}

Clasif ClasificarHora(Hora Entrada){        

return

    Entrada.horas>=6 && Entrada.horas <12? Clasif::Manana:
    Entrada.horas>=12 && Entrada.horas<19? Clasif::Tarde:
    Clasif::Noche;

}
