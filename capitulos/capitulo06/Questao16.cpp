/*
Faça um programa que receba o nome de cinco produtos e seus respectivos preços. Calcule e mostre:
■■ a quantidade de produtos com preço inferior a R$ 50,00;
■■ o nome dos produtos com preço entre R$ 50,00 e R$ 100,00;
■■ a média dos preços dos produtos com preço superior a R$ 100,00.
*/
#include <iostream>
using namespace std;

int main() {
    string nome[5];
    double price[5];
    int qtd = 0, qtdMed = 0;
    double med = 0, soma = 0;

    for(int i = 0; i < 5; i++){
        cout << "Insira o nome do " << i+1 << " produto: ";
        cin >> nome[i];
        cout << "Insira o preco do " << i+1 << " produto: R$ ";
        cin >> price[i];
        
        if(price[i] < 50){
            qtd++;
        } else {
            qtdMed++;
            soma += price[i];
        }
    }
    med = soma / qtdMed;

    cout << "\nA quantidade de produtos com preco inferior a R$ 50,00 reais: " << qtd;
    cout << "\nO nome dos produtos com preco entre R$ 50,00 e R$ 100,00 reais: "<< endl;
    for(int i = 0; i < 5; i++){
        if(price[i] > 50 && price[i] < 100){
            cout << nome[i] << " ";
        }
    }
    cout << "\nA media dos precos dos produtos com preco superior a R$ 50,00 reais: " << med;
    return 0;
}