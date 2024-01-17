/*
Exercício 7:
Escreva um programa que solicita ao usuário para adivinhar um número entre 1 e 100. O programa deve fornecer dicas (maior, menor, acertou) até que o usuário acerte.
*/
#include <iostream>
#include <random>
#include <chrono>

using namespace std;

int main() {
    auto seed = chrono::system_clock::now().time_since_epoch().count();
    mt19937 gen(static_cast<unsigned int>(seed));

    uniform_int_distribution<int> distribution (1, 100);
    int num = distribution(gen), tent;

    cout << "Seja bem-vindo a um jogo de adivinhacao! Tente  adivinhar um numero entre 1 e 100.";

    do {
        cout << "\nInsira sua tentativa: ";
        cin >> tent;

        if(tent > num){
            cout << "\nTente um numero menor.";
        } else if(tent < num){
            cout << "Tente um numero maior.";
        } else {
            cout << "Parabens! Acertou.";
        }
    } while(tent != num);

    return 0;
}