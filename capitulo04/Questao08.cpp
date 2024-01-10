/*
Faça um programa para calcular e mostrar o salário reajustado de um funcionário. O percentual de aumento
encontra-se na tabela a seguir.
Até R$ 300,00 - 35%
Acima de R$ 300,00 - 15%
*/
#include <iostream>
using namespace std;

int main() {
    double salario, salarioReajust;

    cout << "Informe seu salario: R$ ";
    cin >> salario;

    if(salario <= 300){
        salarioReajust = salario + (salario * 35/100);
    } else {
        salarioReajust = salario + (salario * 15/100);
    }

    cout << "Salario reajustado: " << salarioReajust;
    return 0;
}
