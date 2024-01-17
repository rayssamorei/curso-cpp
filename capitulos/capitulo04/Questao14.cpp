/*
Faça um programa que receba o salário de um funcionário e, usando a tabela a seguir, calcule e mostre
o novo salário.
FAixA sALAriAL % dE AuMENTo
Até R$ 300,00 50%
R$ 300,00 R$ 500,00 40%
R$ 500,00 R$ 700,00 30%
R$ 700,00 R$ 800,00 20%
R$ 800,00 R$ 1.000,00 10%
Acima de R$ 1.000,00 5%
*/
#include <iostream>
using namespace std;

int main(){
    double sal, aum;

    cout << "Informe seu salario: R$ ";
    cin >> sal;

    if(sal <= 300){
        aum = 1.5;
    } else if (sal > 300 && sal <= 500){
        aum = 1.4;
    } else if (sal > 500 && sal <= 700){
        aum = 1.3;
    } else if (sal > 700 && sal <= 800){
        aum = 1.2;
    } else if (sal > 800 && sal <= 1000){
        aum = 1.1;
    } else {
        aum = 1.05;
    }

    sal = sal * aum;

    cout << "O novo salario com aumento e: R$ " << sal;

    return 0;
}