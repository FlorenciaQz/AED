#include <iostream>
#include <cassert>

using namespace std;

// Definicion tipo de dato

struct Actores {

    string nombre;
    string edad;
};

struct Cancion {

    string nombre;
    string artista;

};

enum struct Genero {Comedia, Terror, Suspenso, Thriller, CienciaFiccion, Drama, Animacion};

struct SerieDeNetflix {

    string nombre;
    double puntaje;
    Actores actores;
    Cancion cancion;
    Genero genero;
    string capitulo;
    string momento;
};

//Prototipo de las funciones

void DarPuntaje (SerieDeNetflix&, double); //Esta función genera un cambio en Serie
unsigned GetCantidadActroresEnEscena(const SerieDeNetflix&, string, string); //Serie de Netflix serie, string capitulo, string momento
Cancion GetCancionEnEscena (const SerieDeNetflix&, string, string); //SerieDeNetflix Serie, String Capitulo, String momento)
Actores GetActorEnEscena(const SerieDeNetflix& serie, string capitulo, string momento);
