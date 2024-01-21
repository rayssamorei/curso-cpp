/*
Faça um programa que receba o nome e a nota de oito alunos e mostre o relatório a seguir:
Digite o nome do 1o
aluno: Carlos
Digite a nota do Carlos: 8
Digite o nome do 2o
aluno: Pedro
Digite a nota do Pedro: 5
Relatórios de notas
Carlos 8.0
Pedro 5.0
..
..
..
Média da classe = ??
*/
#include <iostream>
using namespace std;

int main() {
    string nome[8];
    double nota[8];
    int qtd = 0;
    double soma = 0, media = 0;

    for(int i = 0; i < 8; i++){
        cout << "\nDigite o nome do "<< i+1 << " aluno: ";
        cin >> nome[i];
        cout << "Digite a nota do " << nome[i] << ":";
        cin >> nota[i];

        soma += nota[i];
        qtd++;
    }

    media = soma/qtd;
    cout << "\nRelatorio de notas" << endl;
    for(int i = 0; i < 8; i++){
        cout << nome[i] << " " << nota[i] << "\n";
    }

    cout << "Media da classe = " << media;
    return 0;
}