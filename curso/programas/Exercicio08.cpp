//Exercicio feito sobre if e else em c++ utilizando operadores lógicos.
//Escreva um programa que verifica se um número inserido pelo usuário está no intervalo de 1 a 100 (inclusive) ou não.
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    if(numero >= 1 && numero <= 100) {
        cout << "O numero esta no intervalo de 1 a 100." << endl;
    } else {
        cout << "O numero nao esta no intervalo de 1 a 100." << endl;
    }

    return 0;
}
