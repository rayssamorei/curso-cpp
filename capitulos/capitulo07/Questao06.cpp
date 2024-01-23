/*
Elabore um programa que preencha uma matriz 12 x 4 com os valores das vendas de uma loja, em que cada
linha representa um mês do ano e cada coluna representa uma semana do mês. O programa deverá calcular
e mostrar:
■■ o total vendido em cada mês do ano, mostrando o nome do mês por extenso;
■■ o total vendido em cada semana durante todo o ano;
■■ o total vendido pela loja no ano.
*/
#include <iostream>
using namespace std;

int main() {
    double vendas[12][4];
    string meses[12] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};
    double totalMes[12], totalSem[4];
    double total = 0;

    for(int i = 0; i < 12; i++){
        cout << "\nValores do mes " << i+1 << endl;
        for(int j = 0; j < 4; j++){
            cout << "Semana " << j+1 << ": R$ ";
            cin >> vendas[i][j];
            totalMes[i] += vendas[i][j];
            total += vendas[i][j];
        }
    }
    for(int j = 0; j < 4; j++){
        for(int i = 0; i < 12; i++){
            totalSem[j] += vendas[i][j];
        }
    }
    cout << "\nTotal vendido em cada mes: " << endl;
    for(int i = 0; i < 12; i++){
        cout << "\nTotal vendido no mes de " << meses[i] << ": R$ " << totalMes[i];
    }
    cout << "\n\nTotal vendido em cada semana: " << endl;
    for(int i = 0; i < 4; i++){
        cout << "\nSemana " << i+1 << ": R$ " << totalSem[i];
    }
    cout << "\n\nO total vendido pela loja no ano foi de: R$ " << total;

    return 0;
}