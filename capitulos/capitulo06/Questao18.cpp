/*
Faça um programa que preencha um vetor com quinze números, determine e mostre:
■■ o maior número e a posição por ele ocupada no vetor;
■■ o menor número e a posição por ele ocupada no vetor
*/
#include <iostream>
using namespace std;

int main(){
    int num [15];
    int maior = 0, menor = 0, posMaior = 0, posMenor = 0;

    for(int i = 0; i < 15; i++){
        cout << "\nInsira o " << i+1 << " numero: ";
        cin >> num [i];
    }

    maior = num[0];
    menor = num[0];

    for(int i = 0; i < 15; i++){
        if(num[i] > maior){
            maior = num[i];
            posMaior = i;
        }
        if(num[i] < menor){
            menor = num[i];
            posMenor = i;
        }
    }

    cout << "\nO maior numero do vetor: "<< maior << " e sua posicao e " << posMaior;
    cout << "\nO menor numero do vetor: "<< menor << " e sua posicao e " << posMenor;
    return 0;
}