/*
Elabore um programa que preencha uma matriz M de ordem 4 x 6 e uma segunda matriz N de ordem 6 x
4, calcule e imprima a soma das linhas de M com as colunas de N.
*/
#include <iostream>
using namespace std;

int main(){
    int m[4][6], n[6][4];

    for(int i = 0; i < 4; i++){
        cout << "Linha: "<< i+1 << endl;
        for(int j = 0; j < 6; j++){
            cout << "Coluna "<< j+1 << ": ";
            cin >> m[i][j];
        }
    }
    for(int i = 0; i < 6; i++){
        cout << "Linha: "<< i+1 << endl;
        for(int j = 0; j < 4; j++){
            cout << "Coluna "<< j+1 << ": " << endl;
            cin >> n[i][j];
        }
    }

    cout << "\nA soma das linhas de M com as colunas de N e: " << endl;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 4; j++) {
            int soma = 0;
            for (int k = 0; k < 6; k++) {
                soma += m[i][k] * n[k][j];
            }
            cout << soma << "\n";
        }
        cout << endl;
    }
    return 0;
}