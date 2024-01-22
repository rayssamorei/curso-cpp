//testando a matriz
#include <iostream>
using namespace std;

int main() {
    int mat [3][5];

    for(int i = 0; i < 3; i++){
        cout << "\nElementos da linha: " << i+1 << endl;
        for(int j = 0; j < 5; j++){
            cout << "Coluna " << j+1 << ": ";
            cin >> mat [i][j];
        }
    }

    for(int i = 0; i < 3; i++){
        cout << "\nElementos da linha: " << i+1 << endl;
        for(int j = 0; j < 5; j++){
            cout << "Coluna " << j+1 << ": "<< mat[i][j];
            cout << endl;
        }
    }
    return 0;
}