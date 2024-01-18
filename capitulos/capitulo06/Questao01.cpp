/*
Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre:
■■ todos os números pares;
■■ a quantidade de números pares;
■■ todos os números ímpares;
■■ a quantidade de números ímpares.
*/
#include <iostream>
using namespace std;

int main() {
    int tam = 6;
    int numero[tam];
    int qtdPares = 0, qtdImpar = 0;
    int pares[qtdPares], impar[qtdImpar];

    for(int i = 0; i < tam; i++){
        cout << "Insira um valor para o "<< i+1 << " numero: ";
        cin >> numero[i];

        if(numero[i] % 2 == 0){
            pares[qtdPares] = numero[i];
            qtdPares++;
        } else {
            impar[qtdImpar] = numero[i];
            qtdImpar++;
        }
    }
    
    cout << "\nQuantidade de numeros pares: " << qtdPares << "\nNumeros pares: ";
    for(int i = 0; i < qtdPares; i++){
        cout << pares[i] << " ";
    }
    cout << "\nQuantidade de numeros impares: " << qtdImpar << "\nNumeros impares: ";
    for(int i = 0; i < qtdImpar; i++){
        cout << impar[i] << " ";
    }
    return 0;
}