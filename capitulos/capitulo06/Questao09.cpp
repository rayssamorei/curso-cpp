/*
Faça um programa que preencha três vetores com dez posições cada um: o primeiro vetor, com os nomes de
dez produtos; o segundo vetor, com os códigos dos dez produtos; e o terceiro vetor, com os preços dos produtos. Mostre um relatório apenas com o nome, o código, o preço e o novo preço dos produtos que sofrerão
aumento.
Sabe-se que os produtos que sofrerão aumento são aqueles que possuem código par ou preço superior a
R$ 1.000,00. Sabe-se ainda que, para os produtos que satisfazem as duas condições anteriores, código e
preço, o aumento será de 20%; para aqueles que satisfazem apenas a condição de código, o aumento será
de 15%; e para aqueles que satisfazem apenas a condição de preço, o aumento será de 10%.
*/
#include <iostream>
using namespace std;

int main() {
    string nomes[10];
    int cod[10];
    double price[10];
    double newPrice = 0;

    for(int i = 0; i < 10; i++){
        cout << "\nInforme o nome do " << i+1 << " produto: ";
        cin >> nomes[i];
        cout << "\nInforme o codigo do produto: ";
        cin >> cod[i];
        cout << "\nE agora informe o preco do produto: ";
        cin >> price[i];
    }

    for(int i = 0; i < 10; i++){
        if(cod[i] % 2 == 0){
            newPrice = 1.15;
            if(price[i] > 1000){
                newPrice = 1.2;
            }
        }
        if(price[i] > 1000){
            newPrice = 1.1;
        }

        if(newPrice != price[i]) {
            cout <<"\nNome: " << nomes[i] << "\nCodigo: " << cod[i] << "\nPreco: " << price[i] << "\nAumento: " << price[i]*newPrice << "\n\n";
        }
    }

}