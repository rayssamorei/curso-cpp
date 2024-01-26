#include <iostream>
using namespace std;
//Diagonal Secundaria
int main() {
    int matriz[7][7];
    for (int i = 0; i < 7; i++) {
        for (int j = 0; j < 7; j++) {
            matriz[i][j] = i * 7 + j + 1;
        }
    }
    cout << "Elementos da diagonal secundária:" << endl;
    for (int i = 0; i < 7; i++) {
        cout << matriz[i][7 - 1 - i] << " ";
    }
    return 0;
}
