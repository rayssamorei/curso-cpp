//Solicite ao usuário para inserir um número e determine se é um número primo.
#include <iostream>
using namespace std;

int main() {
    int numero;

    cout << "Digite um numero inteiro positivo: ";
    cin >> numero;

    if (numero < 2) {
        cout << "O numero nao e primo, pois e menor que 2." << std::endl;
    } else {
        bool primo = true;

        for (int i = 2; i < numero; ++i) {
            if (numero % i == 0) {
                primo = false;
                break;
            }
        }

        if (primo) {
            cout << "O numero e primo." << endl;
        } else {
            cout << "O numero nao e primo." << endl;
        }
    }
    return 0;
}