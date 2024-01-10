/*
Um banco concederá um crédito especial aos seus clientes, de acordo com o saldo médio no último ano. Faça
um programa que receba o saldo médio de um cliente e calcule o valor do crédito, de acordo com a tabela a
seguir. Mostre o saldo médio e o valor do crédito.
Acima de R$ 400,00 - 30% do saldo médio
R$ 400,00 R$ 300,00 - 25% do saldo médio
R$ 300,00 R$ 200,00 - 20% do saldo médio
Até R$ 200,00 - 10% do saldo médio
*/
#include <iostream>
using namespace std;

int main() {
    double saldo, credito, creditoFinal;
    
    cout << "Informe o saldo medio: ";
    cin >> saldo;

    if (saldo > 400){
        credito = 0.3;
    } else if ((saldo <= 400) && (saldo > 300)){
        credito = 0.25;
    } else if ((saldo <= 300) && (saldo > 200)){
        credito = 0.2;
    } else {
        credito = 0.1;
    }

    creditoFinal = saldo * credito;
    saldo = creditoFinal + saldo;

    cout << "O valor do credito e: R$ " << creditoFinal << endl;
    cout << "O valor do saldo medio e: R$ " << saldo;

    return 0;
}