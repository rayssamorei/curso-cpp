/*
Faça um programa que preencha uma matriz 20 x 10 com números inteiros, e some cada uma das colunas,
armazenando o resultado da soma em um vetor. A seguir, o programa deverá multiplicar cada elemento da
matriz pela soma da coluna e mostrar a matriz resultante.
*/
#include <iostream>
using namespace std;

int main() {
    int mat[20][10];
    int soma[20] = {0};
    int resultante[20][10];

    for(int i = 0; i < 20; i++){
        cout << "Linha: " << i+1 << endl;
        for(int j = 0; j < 10; j++){
            cout << "Coluna " << j+1 << ": ";
            cin >> mat[i][j];
            soma[i] += mat[i][j];
        }
    }
    for(int i = 0; i < 20; i++){
        for(int j = 0; j < 10; j++){
            resultante[i][j] = mat[i][j] * soma[i];
        }
    }
    cout << "A matriz resultante da soma das colunas multiplicadas a cada elemento esta a seguir: " << endl;
    for(int i = 0; i < 20; i++){
        cout << "\nLinha: "<< i+1<< endl;
        for(int j = 0; j < 10; j++){
            cout << "Elemento " << j+1 << ": " << resultante[i][j] << endl;
        }
    }
    return 0;
}