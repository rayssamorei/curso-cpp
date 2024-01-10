/*
Uma empresa decide dar um aumento de 30% aos funcionários com salários inferiores a R$ 500,00. Faça um
programa que receba o salário do funcionário e mostre o valor do salário reajustado ou uma mensagem, caso
ele não tenha direito ao aumento.
Questão 7
*/
#include <iostream>
using namespace std;

int main (){
    double salario, reajuste;

    cout << "Informe seu salario: R$ ";
    cin >> salario;

    if(salario < 500){
        reajuste = salario * 0.3;
        cout << "O salario reajustado e: R$" << reajuste+salario;
    } else {
        cout << "Nao tem direito ao aumento. ";
    }
    return 0;
}