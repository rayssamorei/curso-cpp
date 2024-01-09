//Aula 14 - exercicio
//
#include <iostream>
using namespace std;
int main() {
    int num, total = 0, cont = 0;
    double media;

    cout << "Digite uma sequencia de numeros. Insira um numero negativo para encerrar" << endl;

    cout << "Digite um numero: ";
    cin >> num;

    while (num >= 0) {
        total += num;
        cont++;

        cout << "Digite um numero (ou um número negativo para encerrar): ";
        cin >> num;
    }

    if (cont == 0) {
        cout << "Nenhum numero foi inserido." << endl;
    } else {
        media = total / cont;

        cout << "A media dos numeros inseridos é: " << media << endl;
    }

    return 0;
}
