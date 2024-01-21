/*
Faça um programa que receba o nome e duas notas de seis alunos e mostre o relatório a seguir. Relatório
de notas:
ALUNO - 1a PROVA - 2a PROVA - MÉDIA - SITUAÇÃO
Carlos     8,0      9,0        8,5    Aprovado
Pedro      4,0      5,0        4,5    Reprovado
■■ média da classe = ?
■■ percentual de alunos aprovados = ?%
■■ percentual de alunos de exame = ?%
■■ percentual de alunos reprovados = ?%
*/
#include <iostream>
using namespace std;

int main() {
    double nota1[6], nota2[6], medias[6];
    string nome[6], situ[6];
    int qtd = 0;
    double somaMed = 0, mediaSala = 0;
    double porcAlunosAprovad = 0, porcAlunosExam = 0, porcAlunosRepro = 0;
    double media = 0;

    for(int i = 0; i < 6; i++){
        cout << "Informe o nome do "<< i+1 << " aluno: ";
        cin >> nome[i];
        cout << "Informe a primeira nota de "<< nome[i] << ": ";
        cin >> nota1[i];
        cout << "Informe a segunda nota de "<< nome[i] << ": ";
        cin >> nota2[i];

        media = (nota1[i] + nota2[i]) / 2;

        medias[i] = media;

        somaMed += medias[i];
        qtd++;

        if(medias[i] < 4){
            situ[i] = "Reprovado";
            porcAlunosRepro++;
        } else if (medias[i] >= 6){
            situ[i] = "Aprovado";
            porcAlunosAprovad++;
        } else {
            situ[i] = "Exame";
            porcAlunosExam++;
        }
    }

    mediaSala = somaMed / qtd;

    porcAlunosAprovad /= 0.06;
    porcAlunosExam /= 0.06;
    porcAlunosRepro /= 0.06;

    cout << "ALUNO - 1 PROVA - 2 PROVA - MEDIA - SITUACAO";
    for(int i = 0; i < 6; i++){
        cout << nome[i] << " - " << nota1[i] << " - " << nota2[i] << " - " << medias[i] << " - " << situ[i];
        cout << "\n\n";
    }

    cout << "\nmedia da classe = " << mediaSala;
    cout << "\npercentual de alunos aprovados = " << porcAlunosAprovad;
    cout << "\npercentual de alunos em exame = " << porcAlunosExam;
    cout << "\npercentual de alunos reprovados = " << porcAlunosRepro;


    return 0;
}