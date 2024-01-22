/*
Crie um programa que preencha uma matriz 2 x 4 com números inteiros, calcule e mostre:
■■ a quantidade de elementos entre 12 e 20 em cada linha;
■■ a média dos elementos pares da matriz.
*/
#include <iostream>
using namespace std;

int main() {
    int mat[2][4];
    int qtd = 0, qtdPares = 0, soma = 0;
    double media = 0;

    for(int i = 0; i < 2; i++){
        cout << "Elementos da linha: " << i+1 << endl;
        for(int j = 0; j < 4; j++){
            cout << "Coluna: " << j+1 << ": ";
            cin >> mat[i][j];
            if(mat[i][j] > 12 && mat[i][j] < 20){
                qtd++;
            }
            if(mat[i][j] % 2 == 0){
                qtdPares++;
                soma += mat[i][j];
            }
        }
    }
    media = soma / qtdPares;

    cout << "\nA quantidade de elementos entre 12 e 20 em cada linha: " << qtd;
    cout << "\nA media de pares da matriz: " << media;

    return 0;
}