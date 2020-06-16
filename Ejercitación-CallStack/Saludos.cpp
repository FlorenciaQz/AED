
#include <iostream>
#include <string>
using std::string;
using std::cout;
using std::cin;

int main() {

    void SaludarAlMundo();
    SaludarAlMundo();
    void Saludar(string);
    Saludar("Mundo");
    Saludar("León");
    string SolicitarNombre();
    Saludar(SolicitarNombre());
}
void SaludarAlMundo() {
    cout << "Hola, Mundo!\n";
}
void Saludar(string s) {
    cout << "Hola, " << s << "!\n";
}
string SolicitarNombre() {
    cout << "Ingrese un nombre simple: "; // No acepta nombre con espacios.
    string nombre;
    cin >> nombre;
    cout << "\n";
    return nombre;
}