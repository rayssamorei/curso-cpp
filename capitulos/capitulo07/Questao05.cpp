/*
Faça um programa que receba:
■■ as notas de 15 alunos em cinco provas diferentes e armazene-as em uma matriz 15 x 5;
■■ os nomes dos 15 alunos e armazene-os em um vetor de 15 posições.
O programa deverá calcular e mostrar:
■■ para cada aluno, o nome, a média aritmética das cinco provas e a situação (aprovado, reprovado
ou exame);
■■ a média da classe.
*/
#include <iostream>
using namespace std;

int main() {
    int notas[15][5];
    string nome[15], situ[15];
    double media[15];
    double somaSala = 0, mediaSala = 0;
    int qtd = 0;

    for(int i = 0; i < 15; i++){
        cout << "\nInforme o nome do " << i+1 << " aluno: ";
        cin >> nome[i];
        int soma = 0;
        for(int j = 0; j < 5; j++){
            cout << "Informe a " << j+1 << " nota do aluno: ";
            cin >> notas[i][j];
            qtd++;
            somaSala += notas[i][j];
            soma += notas[i][j];
        }
        media[i] = soma / 5;
        if(media[i] >= 6){
            situ[i] = "Aprovado";
        } else if(media[i] < 4){
            situ[i] = "Reprovado";
        } else {
            situ[i] = "Exame";
        }
    }

    mediaSala = somaSala / qtd;
    cout << "\nRelatorio da sala: " << "\n";
    for(int i = 0; i < 15; i++){
        cout << "\nAluno " << i+1 << ": " << nome[i];
        cout << "\nMedia aritmetica: " << media[i];
        cout << "\nSituacao: " << situ[i];
        cout << "\n";
    }
    cout << "\nMedia da sala: " << mediaSala;
    return 0;
}