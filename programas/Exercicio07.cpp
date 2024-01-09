//Exercicio de fixação sobre if e else em c++.
/*Escreva um programa que solicita ao usuário para inserir um número e verifica se o número é positivo, negativo ou zero.*/
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um numero: ";
    cin >> numero;

    if(numero > 0) {
        cout << "O numero inserido e positivo." << endl;
    } else if(numero < 0) {
        cout << "O numero inserido e negativo." << endl;
    } else {
        cout << "O numero inserido e zero." << endl;
    }

    return 0;
}
