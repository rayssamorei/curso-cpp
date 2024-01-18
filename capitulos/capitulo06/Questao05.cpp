/*
Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas Lógica e Linguagem de
Programação. Coloque os números das matrículas dos alunos que cursam Lógica em um vetor, quinze alunos.
Coloque os números das matrículas dos alunos que cursam Linguagem de Programação em outro vetor, dez
alunos. Mostre o número das matrículas que aparecem nos dois vetores.
*/
#include <iostream>
using namespace std;

int main(){
    int logica[15], ling[10];
    
    cout << "Insira as matriculas dos alunos que cursam Logica: " << "\n";
    for(int i = 0; i < 15; i++){
        cout << "Insira a " << i+1 << " matricula: ";
        cin >> logica[i];
    }

    cout << "Agora insira as matriculas dos alunos que cursam Linguagem de programacao: " << "\n";
    for(int j = 0; j < 10; j++){
        cout << "Insira a " << j+1 << " matricula: ";
        cin >> ling[j];
    }

    cout << "As matriculas que se repetem nos dois cursos sao: ";
    for(int i = 0; i < 15; i++){
        for(int j = 0; j < 10; j++){
            if(logica[i] == ling[j]){
                cout << i+1 << " ";
            }
        }
    }
    return 0;
}