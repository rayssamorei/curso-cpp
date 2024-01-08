/*Faça um programa que receba o valor do salário mínimo e o valor do salário de um funcionário, calcule
e mostre a quantidade de salários mínimos que esse funcionário ganha.*/
#include <iostream>
using namespace std;

int main() {
    double salMin, salFun, qtdSalMin;

    cout << "Informe o valor do salario minimo: " << endl;
    cin >> salMin;
    cout << "Informe o valor do seu salario: " << endl;
    cin >> salFun;
    
    qtdSalMin = salFun / salMin;

    cout << "A quantidade de salarios minimos que voce ganha equivale a: " << qtdSalMin;

    return 0;
}