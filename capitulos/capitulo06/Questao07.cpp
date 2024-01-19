/*
Faça um programa que preencha um vetor com dez números reais, calcule e mostre a quantidade de números
negativos e a soma dos números positivos desse vetor.
*/
#include <iostream>
using namespace std;

int main() {
    double numero[10];

    int qtdNega = 0;
    double somaPosi = 0;

    for(int i = 0; i < 10; i++){
        cout << "Informe o " << i+1 << " numero: ";
        cin >> numero[i];

        if(numero[i] >= 0){
            somaPosi += numero[i];
        } else {
            qtdNega++;
        }
    }
    cout << "A quantidade de numeros negativos no vetor e: " << qtdNega;
    cout << "\nA soma dos numeros positivos no vetor e: " << somaPosi;

    return 0;
}