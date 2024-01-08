/*
Faça um programa que receba o peso de uma pessoa, calcule e mostre:
a) o novo peso, se a pessoa engordar 15% sobre o peso digitado;
b) o novo peso, se a pessoa emagrecer 20% sobre o peso digitado.
*/

#include <iostream>
using namespace std;

int main(){
    double peso, peso15porc, peso20porc;
    cout << "Informe seu peso: ";
    cin >> peso;

    peso15porc = peso + (peso*15/100);
    peso20porc = peso - (peso*20/100);

    cout << "Se a pessoa engordar 15%, o novo peso sera de: " << peso15porc << endl;
    cout << "Se a pessoa emagrecer 20%, o novo peso sera de: " << peso20porc;

    return 0;
}