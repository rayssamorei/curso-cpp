/*
Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre:
■■ os números múltiplos de 2;
■■ os números múltiplos de 3;
■■ os números múltiplos de 2 e de 3.
*/
#include <iostream>
using namespace std;

int main() {
    int numero[7];
    for(int i = 0; i < 7; i++){
        cout << "Insira o " << i+1 << " numero: ";
        cin >> numero[i];
    }

    cout << "\nNumeros multiplos de 2: ";
    for(int i = 0; i < 7; i++){
        if(numero[i] % 2 == 0){
            cout << numero[i] << " ";
        }
    }

    cout << "\nNumeros multiplos de 3: ";
    for(int i = 0; i < 7; i++){
        if(numero[i] % 3 == 0){
            cout << numero[i] << " ";
        }
    }

    cout << "\nNumeros multiplos de 2 e 3: ";
    for(int i = 0; i < 7; i++){
        if(numero[i] % 2 == 0 && numero[i] % 3 == 0){
            cout << numero[i] << " ";
        }
    }
    return 0;
}