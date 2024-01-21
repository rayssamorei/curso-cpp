/*
Faça um programa que receba cinco números e mostre a saída a seguir:
Digite o 1º número 5
Digite o 2º número 3
Digite o 3º número 2
Digite o 4º número 0
Digite o 5º número 2
Os números digitados foram: 5 + 3 + 2 + 0 + 2 = 12
*/
#include <iostream>
using namespace std;

int main() {
    int num [5];
    int soma = 0;

    for(int i = 0; i < 5; i++){
        cout << "Digite o "<< i+1 << " numero ";
        cin >> num[i];
        soma += num[i];
    }

    cout << "Os numeros digitados foram: ";
    for(int i = 0; i < 5; i++){
        cout << num[i] << " + ";
    }
    cout << " = " << soma;
    return 0;
}