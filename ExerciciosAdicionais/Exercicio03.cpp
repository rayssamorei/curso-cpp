/*
Peça ao usuário para inserir os comprimentos dos lados de um triângulo e determine se é um triângulo equilátero, isósceles ou escaleno.
*/
#include <iostream>
using namespace std;

int main() {
    double lado1, lado2, lado3;

    cout << "Insira o comprimento do primeiro lado do triangulo: ";
    cin >> lado1;
    cout << "Insira o comprimento do segundo lado do triangulo: ";
    cin >> lado2;
    cout << "Insira o comprimento do terceiro lado do triangulo: ";
    cin >> lado3;

    if(lado1 == lado2 && lado2 == lado3){
        cout << "O triangulo e equilatero, pois todos os lados tem o mesmo comprimento.";
    } else if (lado1 != lado2 && lado1 != lado3 && lado2 != lado3){
        cout << "O triangulo e escaleno, pois todos os lados tem comprimentos distintos.";
    } else {
        cout << "O triangulo e isosceles, pois conta com dois lados iguais.";
    }
    return 0;
}