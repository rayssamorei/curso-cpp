/*
Crie uma sub-rotina que receba como parâmetro a altura (alt) e o sexo de uma pessoa e retorne seu peso ideal.
Para homens, deverá calcular o peso ideal usando a fórmula: peso ideal = 72.7 *alt − 58; para mulheres: peso
ideal = 62.1 *alt − 44.7.
*/
#include <iostream>
using namespace std;

double fem (double alt){
    double pesoIdeal = 0.0;
    pesoIdeal = (62.1 * alt) - 47.7;
    return pesoIdeal;
}
double masc (double alt){
    double pesoIdeal = 0.0;
    pesoIdeal = (72.7 * alt) - 58;
    return pesoIdeal;
}
int main() {
    double alt = 0.0;
    char sexo = ' ';

    cout << "Insira seu sexo: (F para feminino e M para masculino) ";
    cin >> sexo;

    cout << "Informe sua altura: ";
    cin >> alt;

    double ideal = 0.0;
    if(sexo == 'f' || sexo == 'F'){
        ideal = fem(alt);
    } else if(sexo == 'm' || sexo == 'M'){
        ideal = masc(alt);
    }

    cout << "O peso ideal e: " << ideal;
    return 0;
}