/*João recebeu seu salário e precisa pagar duas contas atrasadas. Em razão do atraso, ele deverá pagar
multa de 2% sobre cada conta. Faça um programa que calcule e mostre quanto restará do salário de
João.*/
#include <iostream>
using namespace std;

int main(){
    double salario, multa, valorFinal, conta1, conta2, totalBoletos;

    cout << "Informe seu salario: " << endl;
    cin >> salario;
    cout << "Informe o valor da primeira conta atrasada: " << endl;
    cin >> conta1;
    cout << "Informe o valor da segunda conta atrasada: " << endl;
    cin >> conta2;

    multa = conta1 * 0.02 + conta2 * 0.02;
    totalBoletos = conta1 + conta2;
    valorFinal = salario - (totalBoletos + multa);

    cout << "O valor que restara do salario e: " << valorFinal;

    return 0;
}