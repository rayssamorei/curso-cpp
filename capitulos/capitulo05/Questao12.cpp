/*
Faça um programa que receba dez números inteiros e mostre a quantidade de números primos dentre os
números que foram digitados.
*/
#include <iostream>
using namespace std;

bool primo(int numero) {
    if (numero < 2) {
        return false;
    } else {
        for (int i = 2; i < numero; ++i) {
            if (numero % i == 0) {
                return false;
                break;
            }
        }
        return true;
    }

    return true;
}

int main() {
    int num = 0, qtd = 0;
    for(int i = 0; i < 10; i++){
        cout << "Informe o " << i+1 << " numero: ";
        cin >> num;

        if(primo(num)){
            qtd++;
        }
    }
    cout << "A quantidade de numeros primos e: " << qtd;
    return 0;
}