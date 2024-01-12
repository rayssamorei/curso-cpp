/*
Faça um programa que receba o preço de um produto, calcule e mostre, de acordo com as tabelas a seguir, o novo preço e a classificação.
TABELA 1 — PErCENTuAL dE AuMENTo
PrEço                        %
Até R$ 50,00        -        5
Entre R$ 50,00 e R$ 100,00 - 10
Acima de R$ 100,00    -      15

TABELA 2 — CLAssiFiCAçõEs
Até R$ 80,00 - Barato
Entre R$ 80,00 e R$ 120,00 - (inclusive) Normal
Entre R$ 120,00 e R$ 200,00 - (inclusive) Caro
Maior que R$ 200,00 - Muito caro
*/
#include <iostream>
using namespace std;

int main() {
    double preco, aum;

    cout << "Insira o preco do produto: ";
    cin >> preco;

    if (preco < 50){
        aum = 1.05;
    } else if (preco >= 50 && preco <= 100){
        aum = 1.1;
    } else {
        aum = 1.15;
    }

    preco = preco * aum;

    cout << "O novo preco do produto com aumento e: R$ " << preco << endl;
    cout << "Sua classificacao: ";

    if (preco <= 80){
        cout << "Barato";
    } else if(preco > 80 && preco <= 120){
        cout << "Normal";
    } else if (preco > 120 && preco <= 200){
        cout << "Caro";
    } else {
        cout << "Muito caro";
    }

    return 0;
}