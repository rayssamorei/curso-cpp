/*
Elabore uma sub-rotina que leia um número não determinado de valores positivos e retorne a média aritmética desses valores. Terminar a entrada de dados com o valor zero
*/
#include <iostream>
using namespace std;

double med() {
    double soma = 0;
    int qtd = 0;

    while (true) {
        double num;
        cout << "Informe um valor positivo (ou 0 para encerrar): ";
        cin >> num;

        if (num == 0) {
            break;
        }

        if (num > 0) {
            soma += num;
            qtd++;
        } else {
            cout << "informe um valor positivo" << endl;
        }
    }

    if (qtd == 0) {
        cout << "Nenhum valor positivo foi inserido" << endl;
        return 0;
    } else {
        return soma / qtd;
    }
}

int main() {
    double media = med();

    cout << "A media aritmetica dos valores positivos é: " << media << endl;

    return 0;
}
