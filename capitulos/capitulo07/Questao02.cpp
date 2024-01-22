/*
Questão 01 - Exercicios propostos
Faça um programa que preencha uma matriz 3, 5 com números inteiros, calcule e mostre a quantidade de
elementos entre 15 e 20.
*/
#include <iostream>
using namespace std;

int main() {
    int mat [3][5];
    int qtd = 0;

    for(int i = 0; i < 3; i++){
        cout << "\nElementos da linha: " << i+1 << endl;
        for(int j = 0; j < 5; j++){
            cout << "Coluna " << j+1 << ": ";
            cin >> mat [i][j];
            if(mat[i][j] > 15 && mat[i][j] < 20){
                qtd++;
            }
        }
    }
    
    cout << "A quantidade de numeros da matriz entre 15 e 20: " << qtd;
    return 0;
}