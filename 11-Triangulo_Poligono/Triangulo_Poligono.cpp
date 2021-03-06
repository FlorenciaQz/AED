#include <iostream>
#include <cassert>
#include <string>
#include <array>
#include <cmath>

using namespace std;

// Definicion tipo de dato

struct Punto{
    double x;
    double y;
};

struct Triangulo{

    Punto puntoA;
    Punto puntoB;
    Punto puntoC;
    string color;
};

struct Poligono{
    unsigned n; //Numero de puntos que tendrá el polígono
    string color;
    array <Punto, 10> Poligono; //El máximo de puntos es 10
};

//Declaración de funciones

//Funciones de Punto

Punto AgregarPunto();
double DistanciaEntreDosPuntos(Punto, Punto);
void MoverPunto(Punto&, double, double);

//Funciones de Triangulo

Triangulo CrearTriangulo ();
void SetColorTriangulo (Triangulo&, string);
string GetColorTriangulo (const Triangulo&);
void MoverPuntoDeTriangulo (Triangulo&, Punto, double, double);
double GetPerimetroTriangulo (const Triangulo&);
//double GetAreaTriangulo (const Triangulo&);

//Funciones de Poligono

Poligono CrearPoligono (unsigned);
void SetColorPoligono(Poligono&, string);
string GetColorPoligono (const Poligono&);
//void MoverPoligono (Poligono&);
double GetPerimetro (const Poligono&);
double GetArea (const Poligono&);
string GetColor (const Poligono&);

int main(){

    Triangulo trianguloTest = {{0,0},{2,0},{1,3},"Azul"};
    
    SetColorTriangulo(trianguloTest, "Rojo");
    assert(trianguloTest.color == "Rojo");

    SetColorTriangulo(trianguloTest, "Verde");
    assert("Verde" == GetColorTriangulo(trianguloTest));

    SetColorTriangulo(trianguloTest, "Amarillo");
    assert(GetColorTriangulo(trianguloTest) == "Amarillo");

    cout << GetPerimetroTriangulo(trianguloTest); 

    /* cout << "puntoA: (" << trianguloTest.puntoA.x << "," << trianguloTest.puntoA.y << ")";
    cout << "puntoB: (" << trianguloTest.puntoB.x << "," << trianguloTest.puntoB.y << ")";
    cout << "puntoC: (" << trianguloTest.puntoC.x << "," << trianguloTest.puntoC.y << ")";
    cout << "color: " << trianguloTest.color; */


};

//Definicion Funciones

//Funciones de Punto

Punto AgregarPunto(){

    Punto punto;

    cin >> punto.x;
    cin >> punto.y;

    return punto;

}

double DistanciaEntreDosPuntos(Punto a, Punto b){

    double ladoA = (a.x - b.x)*(a.x - b.x);
    double ladoB = (a.y - b.y)*(a.y - b.y);

    return sqrt(ladoA + ladoB);

}

void MoverPunto(Punto& punto, double nuevoX, double nuevoY){

    punto.x = nuevoX;
    punto.y = nuevoY;

}

//Funciones de Triangulo

Triangulo CrearTriangulo (){

    Triangulo triangulo;
    string color;

    cout << "Ingrese PuntoA";
    triangulo.puntoA = AgregarPunto();

    cout << "Ingrese PuntoB";
    triangulo.puntoB = AgregarPunto();

    cout << "Ingrese PuntoC";
    triangulo.puntoC = AgregarPunto();

    cout << "Ingrese color";
    cin >> color;
    triangulo.color = color;

    return triangulo; 

}

void SetColorTriangulo (Triangulo& triangulo, string nuevoColor){

    triangulo.color = nuevoColor;

}

string GetColorTriangulo (const Triangulo& triangulo){

    return triangulo.color;

}

//Problema: Devolver sólo dos decimales o buscar la forma de usar un assert
double GetPerimetroTriangulo (const Triangulo& triangulo){

    double resultado = round(3.444);
     return DistanciaEntreDosPuntos(triangulo.puntoA, triangulo.puntoB) + DistanciaEntreDosPuntos(triangulo.puntoB, triangulo.puntoC) + DistanciaEntreDosPuntos(triangulo.puntoC, triangulo.puntoA);

}

void MoverPuntoDeTriangulo (Triangulo& triangulo, Punto punto, double nuevox, double nuevoy){

    MoverPunto(punto, nuevox, nuevoy);

}


//Funciones de Poligono

Poligono CrearPoligono (unsigned numeroVertices){

    for (int i = 0, i <= numeroVertices, i++)

}
