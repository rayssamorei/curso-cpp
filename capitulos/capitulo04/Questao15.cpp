/*
Uma agência bancária possui dois tipos de investimentos, conforme o quadro a seguir. Faça um programa que receba o tipo de investimento e seu valor, calcule e mostre o valor corrigido após um mês de
investimento, de acordo com o tipo de investimento.
TiPo - descrição - rendimento mensal
1 Poupança 3%
2 Fundos de renda fixa 4%
*/
#include <iostream>
using namespace std;

int main() {
    int tipo;
    double valor;

    cout << "Digite o tipo de investimento (1 para poupanca, 2 para fundos de renda fixa): ";
    cin >> tipo;

    cout << "Digite o valor investido: ";
    cin >> valor;

    switch (tipo) {
        case 1:
            valor = valor * 1.03;
            break;
        case 2:
            valor = valor * 1.04;
            break;
        default:
            cout << "Tipo de investimento invalido." << endl;
            return 1;
    }

    
    cout << "O valor corrigido apos um mes é: " << valor << endl;

    return 0;
}