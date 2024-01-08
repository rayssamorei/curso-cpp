/*Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, considerando peso 2 para a primeira e peso 3 para a segunda. */
#include <iostream>
using namespace std;

int main() {
    double nota1, nota2, mediaPond;

    cout << "Informe a primeira nota: " << endl;
    cin >> nota1;
    cout << "Informe a segunda nota: " << endl;
    cin >> nota2;

    mediaPond = ((nota1 * 2) + (nota2 * 3)) / 5;

    cout << "A media ponderada e: " << mediaPond;
    return 0;
}
