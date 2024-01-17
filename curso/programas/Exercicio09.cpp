//Aula 12 - Exercicios
/*
Crie um método que receba a temperatura em Celsius e retorne "Está quente" se a temperatura for superior a 30°C, caso contrário, retorne "Não está quente".
*/

#include <iostream>
using namespace std;

int main(){
    int temp;
    string retorno;

    cout << "Insira a temperatura da sua regiao: " << endl;
    cin >> temp;

    retorno = (temp > 30) ? "Esta quente" : "Nao esta quente";

    cout << retorno;
    return 0;
}
