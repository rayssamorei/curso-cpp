/*
Uma loja utiliza o código V para transação à vista e P para transação a prazo. Faça um programa que receba
o código e o valor de quinze transações, calcule e mostre:
■■ o valor total das compras à vista;
■■ o valor total das compras a prazo;
■■ o valor total das compras efetuadas; e
■■ o valor da primeira prestação das compras a prazo juntas, sabendo-se que serão pagas em três vezes.
*/
#include <iostream>
using namespace std;

int main() {
    double compVista = 0, compPrazo = 0, totalComp = 0, valor;
    char codigo;

    for(int i = 0; i < 15; i++){
        cout << "Insira o codigo: (P - a prazo e V - a vista)" << endl;
        cin >> codigo;
        cout << "Insira o valor da compra: " << endl;
        cin >> valor;
        if(codigo == 'V' || codigo == 'v'){
            compVista += valor;
        } else if(codigo == 'P' || codigo == 'p'){
            compPrazo += valor;
        } else {
            cout << "Erro!";
            break;
        }
    }
    totalComp = compPrazo + compVista;

    cout << "Total das compras a vista: R$" << compVista << endl;
    cout << "Total das compras a prazo: R$" << compPrazo << endl;
    cout << "Total das compras efetuadas: R$" << totalComp << endl;
    cout << "Primeira prestacao das compras a prazo: R$" << compPrazo / 3;
    return 0;
}