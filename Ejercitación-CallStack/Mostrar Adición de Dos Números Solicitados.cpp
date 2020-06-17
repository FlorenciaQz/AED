/* AskAddShow
JMS
2018 */

#include <iostream>
using namespace std; 

int main() {

    void MostrarAdicionDeDosNumerosSolicitados();
    MostrarAdicionDeDosNumerosSolicitados();
}

void MostrarAdicionDeDosNumerosSolicitados() {
   
    std::cout << "Ingrese dos números enteros para conocer su suma:\n";
    int SolicitarNumero();
    void MostrarAdicion(int, int);
    MostrarAdicion(
        SolicitarNumero(),
        SolicitarNumero()
    );
}
int SolicitarNumero() {
    std::cout << "Ingrese un número entero: ";
    int n;
    std::cin >> n;
    std::cout << '\n';
    return n;
}
void MostrarAdicion(int a, int b) {
  
    int Add(int, int);
    std::cout << "La suma es: " << Add(a, b) << '\n';
}
int Add(int a, int b) { return a + b; }
