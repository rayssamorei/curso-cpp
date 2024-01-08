//Faça um programa que receba o peso de uma pessoa em quilos, calcule e mostre esse peso em gramas.
#include <iostream>
using namespace std;

int main(){
    double pesoQuilos, pesoGramas;

    cout << "Informe seu peso em quilos: " << endl;
    cin >> pesoQuilos;

    pesoGramas = pesoQuilos * 1000;

    cout << "Seu peso em quilos " << pesoQuilos << ", para gramas e: " << pesoGramas;
    return 0;
}