/*
Faça um programa que preencha uma matriz M (2  2), calcule e mostre a matriz R, resultante da
multiplicação dos elementos de M pelo seu maior elemento.
*/
#include <iostream>
using namespace std;

int main() {
    int mat[2][2], resultante[2][2];
    int maior;

    for(int i = 0; i < 2; i++){
        cout << "Elementos da linha: " << i+1 << endl;
        for(int j = 0; j < 2; j++){
            cout << "Linha: " << j+1 << ": ";
            cin >> mat[i][j];
        }
    }
    maior = mat[1][1];
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            if(mat[i][j] > maior){
                maior = mat[i][j];
            }
        }
    }
    for(int i = 0; i < 2; i++){
        for(int j = 0; j < 2; j++){
            resultante[i][j] = maior * mat[i][j];
        }
    }
    cout << "Resultado da multiplicacao: ";
    for(int i = 0; i < 2; i++){
        cout << "Elementos da linha: " << i+1 << endl;
        for(int j = 0; j < 2; j++){
            cout << resultante[i][j] << endl;
        }
    }

    return 0;
}