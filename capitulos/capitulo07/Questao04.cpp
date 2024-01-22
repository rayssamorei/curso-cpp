/*
Elabore um programa que preencha uma matriz 6 x 3, calcule e mostre:
■■ o maior elemento da matriz e sua respectiva posição, ou seja, linha e coluna;
■■ o menor elemento da matriz e sua respectiva posição, ou seja, linha e coluna.
*/
#include <iostream>
using namespace std;

int main(){
    int mat[6][3];
    int maior = 0, linMaior = 0, colMaior = 0;
    int menor = 0, linMenor = 0, colMenor  = 0;

    for(int i = 0; i < 6; i++){
        cout << "Elementos da linha: "<< i+1 << endl;
        for(int j = 0; j < 3; j++){
            cout << "Coluna " << j+1 << ": ";
            cin >> mat[i][j];
        }
    }
    maior = mat[1][1];
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 3; j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
                linMaior = i+1;
                colMaior = j+1;
            }
        }
    }
    menor = mat[1][1];
    for(int i = 0; i < 6; i++){
        for(int j = 0; j < 3; j++){
            if(mat[i][j] < menor){
                menor = mat[i][j];
                linMenor = i+1;
                colMenor = j+1;
            }
        }
    }

    cout << "\nO maior elemento da matriz: " << maior << ", que esta na linha " << linMaior << " e na coluna " << colMaior;
    cout << "\nO menor elemento da matriz: " << menor << ", que esta na linha " << linMenor << " e na coluna " << colMenor;
    return 0;
}