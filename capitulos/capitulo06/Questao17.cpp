/*
Faça um programa que preencha dois vetores de dez posições cada, determine e mostre um terceiro contendo os elementos dos dois vetores anteriores ordenados de maneira decrescente.
*/
#include <iostream>
using namespace std;

int main() {
    int tam = 10;
    int vetor1[tam], vetor2[tam], resultante[tam * 2];

    for(int i = 0; i < 10; i++){
        cout << "\nInforme o " << i+1 << " numero do vetor 1: ";
        cin >> vetor1[i];
    }
    for(int i = 0; i < 10; i++){
        cout << "\nInforme o " << i+1 << " numero do vetor 2: ";
        cin >> vetor2[i];
    }
    for (int i = 0; i < tam; i++) {
        resultante[i] = vetor1[i];
        resultante[tam + i] = vetor2[i];
    }
    for (int i = 0; i < 2 * tam - 1; i++) {
        for (int j = i + 1; j < 2 * tam; j++) {
            if (resultante[i] < resultante[j]) {
                int aux = resultante[i];
                resultante[i] = resultante[j];
                resultante[j] = aux;
            }
        }
    }

    cout << "\nOs numeros do primeiro e segundo vetor em ordem decrescente: ";
    for(int i = 0; i < 2 * tam; i++){
        cout << resultante[i] << " ";
    }
    return 0;
}