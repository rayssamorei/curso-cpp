/*
Faça um programa que receba o salário atual de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor do aumento e o novo salário.
SALÁRIO                     PErCENTuAL DE AUMENTO
Até R$ 300,00               15%
R$ 300,00 > < R$ 600,00     10%
R$ 600,00 >= <= R$ 900,00   5%
Acima de R$ 900,00          0%
*/
#include <iostream>
using namespace std;

int main(){
    double sal, aum;

    cout << "Informe seu atual salario: R$ ";
    cin >> sal;

    if (sal <= 300){
        aum = 0.15;
    } else if (sal > 300 && sal < 600){
        aum = 0.1;
    } else if (sal >= 600 && sal <= 900){
        aum = 0.05;
    } else {
        aum = 0.0;
    }

    sal = sal + (sal * aum);

    cout << "Seu novo salario com aumento de " << aum << " e: " << sal;
    return 0;
}