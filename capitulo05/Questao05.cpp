//Faça um programa que mostre as tabuadas dos números de 1 a 10.
#include <iostream>
using namespace std;

int main() {
    for(int i = 1; i <= 10; i++){
        cout << "Tabuada do " << i << ":" << "\n";
        for (int j = 1; j <= 10; j++){
            cout << j << " x " << i << " = " << j * i << "\n";
        }
        cout << "\n\n";
    }
    return 0;
}