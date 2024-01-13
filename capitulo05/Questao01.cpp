/*Faça um programa que leia cinco grupos de quatro valores (A, B, C, D) e mostre-os na ordem lida. Em seguida, organize-os em ordem crescente e decrescente.*/
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int grupos[5][4];

    for (int i = 0; i < 5; ++i) {
        cout << "\nDigite os valores para o grupo " << i + 1 << endl;
        for (int j = 0; j < 4; ++j) {
            cout << "Digite o valor " << j + 1 << ": ";
            cin >> grupos[i][j];
        }
    }

    cout << "\nGrupos em ordem crescente:" << endl;
    for (int i = 0; i < 5; ++i) {
        sort(grupos[i], grupos[i] + 4);
        for (int j = 0; j < 4; ++j) {
            cout << grupos[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nGrupos em ordem decrescente:" << endl;
    for (int i = 0; i < 5; ++i) {
        sort(grupos[i], grupos[i] + 4, greater<int>());
        for (int j = 0; j < 4; ++j) {
            cout << grupos[i][j] << " ";
        }
        cout << "\n";
    }

    return 0;
}
