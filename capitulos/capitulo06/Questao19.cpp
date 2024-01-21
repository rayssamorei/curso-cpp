/*
Faça um programa que leia dois vetores de dez posições e faça a multiplicação dos elementos de mesmo
índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.
*/
#include <iostream>
using namespace std;

int main() {
    int num1[10], num2[10], resultante[10];
    
    for(int i = 0; i < 10; i++){
        cout << "\nInsira o " << i+1 << " numero do 1 vetor: ";
        cin >> num1[i];
    }
    for(int i = 0; i < 10; i++){
        cout << "\nInsira o " << i+1 << " numero do 2 vetor: ";
        cin >> num2[i];
    }

    for(int i = 0; i < 10; i++){
        resultante[i] = num1[i] * num2[i];
    }
    
    cout << "O vetor resultante da multiplicacao dos elementos do primeiro vetor pelo o segundo: ";
    for(int i = 0; i < 10; i++){
        cout << resultante[i] << " ";
    }
    return 0;
}