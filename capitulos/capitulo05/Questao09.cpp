/*
Faça um programa que receba dez idades, pesos e alturas, calcule e mostre:
■■ a média das idades das dez pessoas;
■■ a quantidade de pessoas com peso superior a 90 kg e altura inferior a 1,50 metro; e
■■ a porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de
1,90 m.
*/
#include <iostream>
using namespace std;

int main() {
    int idade = 0, qtdIdd = 0, qtdPeso90Alt150 = 0, qtd10E30 = 0, qtdAlt190 = 0;
    double peso = 0, altura = 0, medIdd = 0, porc1OE30 = 0;

    for(int i = 0; i < 10; i++){
        cout << "Informe a idade da " << i+1 << ": ";
        cin >> idade;
        cout << "Informe o peso: ";
        cin >> peso;
        cout << "Informe a altura: ";
        cin >> altura;

        medIdd += idade;
        qtdIdd++;

        if(peso > 90 && altura < 1.50){
            qtdPeso90Alt150++;
        }
        if(idade > 10 && idade < 30){
            qtd10E30++;
        }
        if(altura > 1.90){
            qtdAlt190++;
        }
    }
    medIdd /= qtdIdd;
    porc1OE30 = qtd10E30 / (qtdAlt190/100);

    cout << "Media das idades: " << medIdd << endl;
    cout << "A quantidade de pessoas com peso superior a 90kg e altura inferior a 1.50m: "<< qtdPeso90Alt150 << endl;
    cout << "Porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1,90 m: " << porc1OE30;
    return 0;
}