/*
Faça um programa que receba a idade, a altura e o peso de cinco pessoas, calcule e mostre:
■■ a quantidade de pessoas com idade superior a 50 anos;
■■ a média das alturas das pessoas com idade entre 10 e 20 anos;
■■ a porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas.
*/
#include <iostream>
using namespace std;

int main() {
    int idade = 0, qtdSuperior50 = 0;
    double peso = 0, altura = 0, mediaAlt = 0, qtdAlt = 0, porcPeso = 0;

    for(int i = 0; i < 5; i++){
        cout << "Informe a idade da " << i+1 << " pessoa: " << endl;
        cin >> idade;
        cout << "Informe o peso: " << endl;
        cin >> peso;
        cout << "Informe agora a altura: " << endl;
        cin >> altura;

        if(idade > 50){
            qtdSuperior50++;
        } else if(idade >= 10 && idade <= 20){
            mediaAlt += altura;
            qtdAlt++;
        }

        if(peso < 40){
            porcPeso++;
        }
    }
    mediaAlt = mediaAlt / qtdAlt;
    porcPeso = porcPeso / 0.05;

    cout << "Quantidade de pessoas com idade superior a 50 anos: " << qtdSuperior50 << endl;
    cout << "Media de altura das pessoas com idade entre 10 e 20 anos: " << mediaAlt << endl;
    cout << "Porcentagem das pessoas com peso inferior a 40kg entre todas as pessoas: " << porcPeso << endl;
    return 0;
}