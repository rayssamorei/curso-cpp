/*
Faça um programa que preencha um vetor com os nomes de sete alunos e carregue outro vetor com a média
final desses alunos. Calcule e mostre:
■■ o nome do aluno com maior média (desconsiderar empates);
■■ para cada aluno não aprovado, isto é, com média menor que 7, mostrar quanto esse aluno precisa tirar na prova de exame final para ser aprovado. Considerar que a média para aprovação no exame é 5.
*/
#include <iostream>
using namespace std;

int main() {
    string nome [7];
    int tam = 7;
    double media[tam], maiorMed = 0, notaNec = 0;

    for(int i = 0; i < 7; i++){
        cout << "\nInforme o " << i+1 << " nome: ";
        cin >> nome[i];
        cout << "\nInforme a " << i+1 << " media: ";
        cin >> media[i];

        if(media[i] > maiorMed){
            maiorMed = media[i];
            tam = i;
        }
    }

    cout << "\nAluno com maior media: " << nome[tam];

    for(int i = 0; i <  7; i++){
        if(media[i] < 7){
            notaNec =  5 - media[i];
            cout << "\n" << nome[i] << " precisa de " << notaNec << " pontos para ser aprovado.";
        }
    }

    return 0;
}