/* Um funcionário recebe um salário fixo mais 4% de comissão sobre as vendas. Faça um programa
que receba o salário fixo do funcionário e o valor de suas vendas, calcule e mostre a comissão e seu
salário final. */
#include <iostream>
using namespace std;

int main(){
    double sal, comissao, salFinal, vendas;

    cout << "Informe seu salario: " << endl;
    cin >> sal;

    cout << "Informe o valor de suas vendas: " << endl;
    cin >> vendas;

    comissao = vendas * 0.04;
    salFinal = sal + comissao;

    cout << "O valor do salario final e: R$" << salFinal;

    return 0;
}