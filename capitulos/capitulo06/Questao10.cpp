/*
Faça um programa que preencha um vetor com dez números inteiros e um segundo vetor com cinco números inteiros, calcule e mostre dois vetores resultantes. O primeiro vetor resultante será composto pela
soma de cada número par do primeiro vetor somado a todos os números do segundo vetor. O segundo
vetor resultante será composto pela quantidade de divisores que cada número ímpar do primeiro vetor
tem no segundo vetor.
*/
#include <iostream>
using namespace std;

int main() {
    int vetor1 [10], vetor2 [5];
    int resultante1[10], resultante2[10];

    for(int i = 0; i < 10; i++){
        cout << "Informe o " << i+1 << " numero do primeiro vetor: ";
        cin >> vetor1[i];
    }
    
    for(int i = 0; i < 5; i++){
        cout << "Informe o " << i+1 << " numero do segundo vetor: ";
        cin >> vetor2[i];
    }
    
    for(int i = 0; i < 10; i++){
        resultante1[i] = 0;
        if(vetor1[i] % 2 == 0){
            for(int j = 0; j < 5; j++){
                vetor1[i] += vetor2[j];
                resultante1[i] = vetor1[i];
            }
        }
    }
    for(int i = 0; i < 10; i++){
        resultante2[i] = 0;
        if(vetor1[i] % 2 != 0){
            for(int j = 0; j < 5; j++){
                if(vetor1[i] % vetor2[j] == 0){
                    resultante2[i]++;
                }
            }
        }
    }
    cout << "Primeiro vetor resultante será composto pela soma de cada numero par do primeiro vetor somado a todos os numeros do segundo vetor." << endl;
    for(int i = 0; i < 10; i++){
        cout << "\nElemento: " << i+1 << ": " << resultante1[i];
    }
    
    cout << "Segundo vetor resultante sera composto pela quantidade de divisores que cada numero impar do primeiro vetor tem no segundo vetor." << endl;

    for(int i = 0; i < 10; i++){
        cout << "\nElemento: " << i+1 << ": " << resultante2[i];
    }
    return 0;
}