/*
Faça um programa que receba a idade e o peso de quinze pessoas, e que calcule e mostre as médias dos
pesos das pessoas da mesma faixa etária. As faixas etárias são: de 1 a 10 anos, de 11 a 20 anos, de 21 a
30 anos e de 31 anos para cima
*/
#include <iostream>
using namespace std;

int main() {
    int idade = 0;
    double peso = 0, fx1E10 = 0, qtd1E10 = 0, fx11E20 = 0, qtd11E20 = 0, fx21E30 = 0, qtd21E30 = 0, fx31 = 0, qtd31 = 0;
    for(int i = 0; i < 15; i++){
        cout << "Informe a idade da " << i+1 << " pessoa: ";
        cin >> idade;
        cout << "Informe o peso da " << i+1 << " pessoa: ";
        cin >> peso;

        if(idade >= 1 && idade <= 10){
            fx1E10 += peso;
            qtd1E10++;
        } else if(idade >= 11 && idade <= 20){
            fx11E20 += peso;
            qtd11E20++;
        } else if(idade >= 21 && idade <= 30){
            fx21E30 += peso;
            qtd21E30++;
        } else {
            fx31 += peso;
            qtd31++;
        }
    }
    fx1E10 /= qtd1E10;
    fx11E20 /= qtd11E20;
    fx21E30 /= qtd21E30;
    fx31 /= qtd31;

    cout << "A media de peso da primeira faixa etaria(1 a 10 anos) e: " << fx1E10;
    cout << "\nA media de peso da segunda faixa etaria(11 a 20 anos) e: " << fx11E20;
    cout << "\nA media de peso da terceira faixa etaria(21 a 30 anos) e: " << fx21E30;
    cout << "\nA media de peso da quarta faixa etaria(acima de 31 anos) e: " << fx31;
    return 0;
}