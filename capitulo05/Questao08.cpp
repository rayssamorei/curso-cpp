/*
Faça um programa que receba a idade, o peso, a altura, a cor dos olhos (A — azul; P — preto; V — verde; e
C — castanho) e a cor dos cabelos (P — preto; C — castanho; L — louro; e R — ruivo) de seis pessoas, e que
calcule e mostre:
■■ a quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg;
■■ a média das idades das pessoas com altura inferior a 1,50 m;
■■ a porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas; e
■■ a quantidade de pessoas ruivas e que não possuem olhos azuis.
*/
#include <iostream>
using namespace std;

int main() {
    int idade = 0;
    double peso = 0, altura = 0, qtdIdd50Peso60 = 0, medIdd = 0, qtdIdd = 0, porcCorOlhos = 0, qtdRuivas = 0;
    char corOlhos = 0, corCabelo = 0;

    for(int i = 0; i < 6; i++){
        cout << "Informe a idade da " << i+1 << " pessoa: ";
        cin >> idade;
        cout << "Informe o peso: ";
        cin >> peso;
        cout << "Informe a altura: ";
        cin >> altura;
        cout << "Informe a cor dos olhos de acordo com: (A — azul; P — preto; V — verde; e C — castanho): ";
        cin >> corOlhos;
        cout << "Informe a cor dos cabelos de acordo com: (P — preto; C — castanho; L — louro; e R — ruivo): ";
        cin >> corCabelo;

        if(idade > 50 && peso < 60){
            qtdIdd50Peso60++;
        }
        if(altura < 1.50){
            medIdd += idade;
            qtdIdd++;
        }
        if(corOlhos == 'A' || corOlhos == 'a'){
            porcCorOlhos++;
        } else if(corCabelo == 'R' || corCabelo == 'r'){
            qtdRuivas++;
        }
    }
    medIdd /= qtdIdd;
    porcCorOlhos /= 0.06;

    cout << "A quantidade de pessoas com idade superior a 50 anos e peso inferior a 60 kg: " << qtdIdd50Peso60 << endl;
    cout << "A media das idades das pessoas com altura inferior a 1,50 m: " << medIdd << endl;
    cout << "A porcentagem de pessoas com olhos azuis entre todas as pessoas analisadas: " << porcCorOlhos << endl;
    cout << "A quantidade de pessoas ruivas e que nao possuem olhos azuis: " << qtdRuivas;
    return 0;
}