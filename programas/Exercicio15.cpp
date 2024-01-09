//Aula 16 - exercicio 02
/*
Crie um programa que solicita ao usuário um número inteiro positivo N. Em seguida, use um loop do-while para exibir uma contagem regressiva a partir de N até 1.
*/
#include <iostream>
using namespace std;

int main() {
    int n;

    do {
        cout << "Digite um numero inteiro positivo: ";
        cin >> n;

        if (n <= 0) {
            cout << "Por favor, digite um numero inteiro positivo valido." << endl;
        }

    } while (n <= 0);

    cout << "Contagem regressiva de " << n << " até 1:" << endl;
    do {
        cout << n << " " << endl;
        n--;
    } while (n >= 1);

    return 0;
}
