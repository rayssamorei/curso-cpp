/*. Faça um programa que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
a) a idade dessa pessoa em anos;
b) a idade dessa pessoa em meses;
c) a idade dessa pessoa em dias;
d) a idade dessa pessoa em semanas.
*/
#include <iostream>
using namespace std;

int main(){
    int anoNasc, anoAtual, idadeAnos, idadeMeses, idadeDias, idadeSem;

    cout << "Informe seu ano de nascimento: " << endl;
    cin >> anoNasc;
    cout << "Informe o ano atual: " << endl;
    cin >> anoAtual;

    idadeAnos = anoAtual - anoNasc;
    idadeMeses = idadeAnos * 12;
    idadeSem = idadeAnos * 52;
    idadeDias = idadeAnos * 365;

    cout << "Sua idade em anos e: " << idadeAnos << endl;
    cout << "Sua idade em meses e: " << idadeMeses << endl;
    cout << "Sua idade em semanas e: " << idadeSem << endl;
    cout << "Sua idade em dias e: " << idadeDias << endl;
    return 0;
}