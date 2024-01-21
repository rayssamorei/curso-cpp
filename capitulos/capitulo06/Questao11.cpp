/*
Faça um programa que receba dez números inteiros e armazene-os em um vetor. Calcule e mostre dois
vetores resultantes: o primeiro com os números pares e o segundo, com os números ímpares.
*/
#include <iostream>
using namespace std;

int main() {
    int tam1 = 0, tam2 = 0;
    int num [10];
    int resultante1[10], resultante2[10];

    for(int i = 0; i < 10; i++){
        cout << "Informe o " << i+1 << " numero: ";
        cin >> num[i];

        if(num[i] % 2 == 0){
            resultante1[tam1] = num[i];
            tam1++;
        } else {
            resultante2[tam2] = num[i];
            tam2++;
        }
    }
    
    cout << "Pares: " << "\n\n";
    for(int i = 0; i < tam1; i++){
        cout << resultante1[i] << " ";
    }

    cout << "\nImpares: " << "\n\n";
    for(int i = 0; i < tam2; i++){
        cout << resultante2[i] << " ";
    }
    return 0;
}