/*
Faça um programa que receba duas notas, calcule e mostre a média aritmética e a mensagem que se encontra
na tabela a seguir:
0,0 - 3,0 Reprovado
3,0 - 7,0 Exame
7,0 - 10,0 Aprovado
*/

#include <iostream>
using namespace std;

int main() {
    double n1, n2, media;

    cout << "Informe a primeira nota do aluno: " << endl;
    cin >> n1;
    cout << "Informe a segunda nota do aluno: " << endl;
    cin >> n2;

    media = (n1 + n2)/2;

    cout << "A media do aluno foi: " << media << endl;
    cout << "Sua situacao: ";

    if(media >= 0 && media < 3){
        cout << "Reprovado";
    } else if (media >= 3 && media < 7){
        cout << "Exame";
    } else if (media >= 7 && media <= 10) {
        cout << "Aprovado";
    }
    return 0;
}