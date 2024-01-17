/*
Cada espectador de um cinema respondeu a um questionário no qual constava sua idade e sua opinião
em relação ao filme: ótimo — 3; bom — 2; regular — 1. Faça um programa que receba a idade e a opinião de quinze espectadores, calcule e mostre:
■■ a média das idades das pessoas que responderam ótimo;
■■ a quantidade de pessoas que responderam regular; e
■■ a percentagem de pessoas que responderam bom, entre todos os espectadores analisados.
*/
#include <iostream>
using namespace std;

int main() {
    int op = 0, idade = 0;
    double medOtimo = 0, qtdOtimo = 0, qtdRegular = 0, qtdBom = 0, percBom = 0;
    for(int i = 0; i < 15; i++){
        cout << "Informe a idade da " << i+1 << " pessoa: ";
        cin >> idade;
        cout << "Informe sua opiniao em relacao ao filme(otimo 3; bom 2; regular 1): ";
        cin >> op;

        if(op == 3){
            medOtimo += idade;
            qtdOtimo++;
        } else if(op == 2){
            qtdBom++;
        } else if(op == 3){
            qtdRegular++;
        }
    }
    medOtimo /= qtdOtimo;
    percBom = qtdBom / 0.15;

    cout << "A media das idade de pessoas que responderam otimo: " << medOtimo;
    cout << "\nA quantidade de pessoas que responderam regular: " << qtdRegular;
    cout << "\nA percentagem de pessoas que responderam bom, entre todos: " << percBom;
    return 0;
}