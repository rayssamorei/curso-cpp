/*
Uma companhia de teatro deseja montar uma série de espetáculos. A direção calcula que, a
R$ 5,00 o ingresso, serão vendidos 120 ingressos, e que as despesas serão de R$ 200,00. Diminuindo-se em
R$ 0,50 o preço dos ingressos, espera-se que as vendas aumentem em 26 ingressos. Faça um programa que
escreva uma tabela de valores de lucros esperados em função do preço do ingresso, fazendo-se variar esse preço de R$ 5,00 a R$ 1,00, de R$ 0,50 em R$ 0,50. Escreva, ainda, para cada novo preço de ingresso, o lucro
máximo esperado, o preço do ingresso e a quantidade de ingressos vendidos para a obtenção desse lucro.
*/
#include <iostream>
using namespace std;

int main() {
    double valorIngresso;
    int qtdIngresso = 120;

    for (double valor = 5; valor >= 1; valor = valor - 0.50){
        valorIngresso = valor * qtdIngresso - 200;
        cout << "Valor ingresso: R$" << valor << endl;
        cout << "Lucro: R$" << valorIngresso << endl;
        cout << "Quantidade ingresso vendido: " << qtdIngresso << endl;
        cout << " " << endl;
        qtdIngresso = qtdIngresso + 26;
    }

    return 0;
}