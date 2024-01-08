//Faça um programa que calcule e mostre a área de um quadrado. Sabe-se que: A = lado * lado.
#include <iostream>
using namespace std;

int main(){
    double lado, area;

    cout << "Informe o lado do triangulo: " << endl;
    cin >> lado;

    area = lado * lado;

    cout << "A area do triangulo e: " << area;
    return 0;
}