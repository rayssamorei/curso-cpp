//Crie uma calculadora que recebe um intervalo de números e exibe todos os números primos dentro desse intervalo.
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
    int inicio, fim;

    cout << "Insira o inicio do intervalo: ";
    cin >> inicio;
    cout << "Insira o fim do intervalo: ";
    cin >> fim;

    if(inicio > fim){
        cout << "intervalo invalido!";
        return 1;
    }

    cout << "Numeros primos no intervalo [" << inicio << ", " << fim << "]:" << endl;

    for (int i = inicio; i <= fim; ++i) {
        if (primo(i)) {
            cout << i << " ";
        }
    }
    
    return 0;
}