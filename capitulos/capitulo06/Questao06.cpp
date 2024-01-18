/*
Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor.
Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor.
Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na
loja. Calcule e mostre:
■■ um relatório com os nomes dos vendedores e os valores a receber referentes à comissão;
■■ o total das vendas de todos os vendedores;
■■ o maior valor a receber e o nome de quem o receberá;
■■ o menor valor a receber e o nome de quem o receberá.
*/
#include <iostream>
#include <limits>
using namespace std;

int main() {
    string nomes [10];
    double vendas [10], comissao [10];
    double total = 0, maiorCom = 0, menorCom = numeric_limits<double>::max();
    string nomeMaiCom = " ", nomeMenCom = " ";

    for (int i = 0; i < 10; i++) {
        cout << "\nDigite o nome do vendedor " << i + 1 << ": ";
        cin >> nomes[i];
        cout << "\nDigite o total das vendas do vendedor " << i + 1 << ": ";
        cin >> vendas[i];
        cout << "\nDigite o percentual de comissao do vendedor " << i + 1 << ": ";
        cin >> comissao[i];
    }

    cout << "\nRelatorio de Comissoes: ";
    for (int i = 0; i < 10; i++) {
        double valor = (vendas[i] * comissao[i] / 100);
        cout << "\nNome: " << nomes[i];
        cout << "\nValor a receber de comissao: R$ " << valor << "\n\n";

        if (valor > maiorCom) {
            maiorCom = valor;
            nomeMaiCom = nomes[i];
        }
        if (valor < menorCom) {
            menorCom = valor;
            nomeMenCom = nomes[i];
        }

        total += vendas[i];
    }

    cout << "\n\nTotal das vendas de todos os vendedores: R$ " << total;
    cout << "\nMaior valor a receber: R$ " << maiorCom << " Vendedor: " << nomeMaiCom;
    cout << "\nMenor valor a receber: R$ " << menorCom << " Vendedor: " << nomeMenCom;

    return 0;
}