/*
Faça um programa que leia um vetor com dez posições para números inteiros e mostre somente os números positivos.
*/
#include <iostream>
using namespace std;

int main() {
    int num[10];

    for(int i = 0; i < 10; i++){
        cout << "\nInsira o " << i+1 << " numero: ";
        cin >> num[i];
    }
    cout << "\nNumeros positivos do vetor: ";
    for(int i = 0; i < 10; i++){
        if(num[i] > 0){
            cout << num[i] << " ";
        }
    }
    return 0;
}