/*
Faça uma sub-rotina que receba como parâmetro o raio de uma esfera, calcule e mostre no programa principal
o seu volume: v = 4/3 * R³
*/
#include <iostream>
#include <cmath>
using namespace std;

double vol(double raio){
    double volume = 0;
    volume = 4/3 * cbrt(raio);
    return volume;
}
int main() {
    double raio = 0.0;
    cout << "Informe o raio da esfera: ";
    cin >> raio;
    double volu = vol(raio);
    cout << "O volume da esfera e: " << volu;
    return 0;
}