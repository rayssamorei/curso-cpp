#include <iostream>
//Aula 2 - Declaração de variáveis
//Programa feito com o intuito de aprender sobre variáveis em C++.
using namespace std;
int main(){

    cout << "Olá! Seja bem-vindo a nosso atendimento online, iremos fazer algumas perguntas para seu cadastro no site..." << endl;

    int idadeCliente = 0;
    double dinheiroInvst = 0.0;
    string nomeCliente = " ";
    string sexo = " ";
    char aux = ' ';

    cout << "Informe seu nome, por favor: " << endl;
    cin >> nomeCliente;

    cout << "Informe seu sexo: " << endl << "F - Feminino e M - Masculino" << endl;
    cin >> aux;
    if (aux == 'm' || aux == 'M')
    {
        sexo = "Masculino";
    } else if (aux == 'f' || aux == 'F'){
        sexo = "Feminino";
    } else {
        cout << "Sexo inserido errado." << endl;
    }

    cout << nomeCliente << ", " << "Informe sua idade: " << endl;
    cin >> idadeCliente;
    if (idadeCliente < 18)
    {
        cout << "Você não pode concluir o cadastro por ser menor de idade, sinto muito.";
    } else {
        cout << "Digite a quantidade de dinheiro que pretende investir: R$ ";
        cin >> dinheiroInvst;
        if (dinheiroInvst >= 500)
        {
            cout << "Aceitamos seu investimento! Seja bem-vindo, " << nomeCliente << endl;
            cout << "Aqui estaremos disponibilizando algumas informações coletadas do cliente..." << endl;
            cout << "Nome: " << nomeCliente << endl << "Idade: " << idadeCliente << endl << "Sexo: " << sexo << endl << "Investimento em nosso site: R$ " << dinheiroInvst;
        } else {
            cout << "Não aceitamos. Sinto muito.";
        }
    }
    return 0;
}
