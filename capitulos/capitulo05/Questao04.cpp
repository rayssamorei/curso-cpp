/*
Faça um programa que receba um número, calcule e mostre a tabuada desse número.
Exemplo:
Digite um número: 5
5 × 0 = 0
5 × 1 = 5
5 × 2 = 10
5 × 3 = 15
5 × 4 = 20
5 × 5 = 25
5 × 6 = 30
5 × 7 = 35
5 × 8 = 40
5 × 9 = 45
5 × 10 = 50
*/
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Informe um numero para ver sua tabuada: ";
    cin >> num;

    for(int i = 0; i <= 10; i++){
        cout << num << " x " << i << " = " << num*i << endl;
    }
    return 0;
}