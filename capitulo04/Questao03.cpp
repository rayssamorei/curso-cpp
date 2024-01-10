//Faça um programa que receba dois números e mostre o menor
#include <iostream>
using namespace std;

int main() {
    int n1, n2, menor;

    cout << "Insira o primeiro numero: " << endl;
    cin >> n1;
    cout << "Insira o segundo numero: " << endl;
    cin >> n2;

    if(n1 > n2){
        menor = n2;
    } else {
        menor = n1;
    }

    cout << "O menor numero e: " << menor;
    return 0;
}