/*
Faça um programa que receba o salário bruto de um funcionário e, usando a tabela a seguir, calcule e
mostre o valor a receber. Sabe-se que este é composto pelo salário bruto acrescido de gratificação e descontado o imposto de 7% sobre o salário.
SALÁRIO GRATIFICAÇÃO
Até R$ 350,00 - R$ 100,00
R$ 350,00 > < R$ 600,00 - R$ 75,00
R$ 600,00 >= <= R$ 900,00 - R$ 50,00
Acima de R$ 900,00 - R$ 35,00
*/
#include <iostream>
using namespace std;

int main() {
    double salBruto, grat, sal;

    cout << "Informe o salario bruto: R$ ";
    cin >> salBruto;

    if (salBruto <= 350){
        grat = 100;
    } else if (salBruto > 350 && salBruto < 600){
        grat = 75;
    } else if (salBruto >= 600 && salBruto <= 900){
        grat = 50;
    } else {
        grat = 35;
    }

    sal = salBruto + grat - (salBruto * 0.07);

    cout << "Valor a receber: R$ " << sal;
    
    return 0;
}