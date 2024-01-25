/*
Crie um programa que preencha duas matrizes 3 x 8 com números inteiros, calcule e mostre:
■■ a soma das duas matrizes, resultando em uma terceira matriz também de ordem 3 x 8;
■■ a diferença das duas matrizes, resultando em uma quarta matriz também de ordem 3 x 8
*/
#include <iostream>
using namespace std;

int main(){
    int m1[3][8], m2[3][8], soma[3][8], dife[3][8];

    for(int i = 0; i < 3; i++){
        cout << "Linha: " << i+1 << endl;
        for(int j = 0; j < 8; j++){
            cout << "Coluna " << j+1 << ": ";
            cin >> m1[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        cout << "Linha: " << i+1 << endl;
        for(int j = 0; j < 8; j++){
            cout << "Coluna " << j+1 << ": ";
            cin >> m2[i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 8; j++){
            soma[i][j] = m1[i][j] + m2[i][j];
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 8; j++){
            dife[i][j] = m1[i][j] - m2[i][j];
        }
    }
    cout << "\nSoma dos elementos das duas matrizes: " << endl;
    for(int i = 0; i < 3; i++){
        cout << "Linha: "<< i+1 << endl;
        for(int j = 0; j < 8; j++){
            cout << "Coluna " << j+1 << ": " << soma[i][j] <<"\n";
        }
    }
    cout << "\nDiferenca dos elementos das duas matrizes: " << endl;
    for(int i = 0; i < 3; i++){
        cout << "Linha: " << i+1 << endl;
        for(int j = 0; j < 8; j++){
            cout << "Coluna " << j+1 << ": " << dife[i][j] <<"\n";
        }
        cout << endl;
    }

    return 0;
}