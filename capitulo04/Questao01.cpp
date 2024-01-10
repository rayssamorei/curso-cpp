/*
Faça um programa que receba quatro notas de um aluno, calcule e mostre a média aritmética das notas e a
mensagem de aprovado ou reprovado, considerando para aprovação média 7.
*/

#include <iostream>
using namespace std;

int main(){
    double n1, n2, n3, n4, media;

    cout << "Informe a primeira nota do aluno: " << endl;
    cin >> n1;
    cout << "Informe a segunda nota do aluno: " << endl;
    cin >> n2;
    cout << "Informe a terceira nota do aluno: " << endl;
    cin >> n3;
    cout << "Informe a quarta nota do aluno: " << endl;
    cin >> n4;

    media = (n1 + n2 + n3 + n4)/4;

    cout << "A media do aluno e: " << media << endl;

    if(media >= 7){
        cout << "Aluno aprovado." << endl;
    } else {
        cout << "Aluno reprovado." << endl;
    }

    return 0;
}