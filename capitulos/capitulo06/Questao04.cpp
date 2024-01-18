/*
Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de elementos
iguais a 30, mostrando as posições em que apareceram.
*/
#include <iostream>
using namespace std;

int main() {
    int numero[15];
    for(int i = 0; i < 15; i++){
        cout << "Insira o " << i+1 << " numero: ";
        cin >> numero[i];
    }
    cout << "As posicoes dos numeros iguais a 30 no vetor sao: ";
    for(int i = 0; i < 15; i++){
        if(numero[i] == 30){
            cout << i+1 << " ";
        }
    }
    return 0;
}