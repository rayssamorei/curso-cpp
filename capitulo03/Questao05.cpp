/*Faça um programa que receba o preço de um produto, calcule e mostre o novo preço, sabendo-se
que este sofreu um desconto de 10%.*/
#include <iostream>
using namespace std;

int main(){
    double preco, novoPreco;

    cout << "Insira o preco do produto: R$ " << endl;
    cin >> preco;

    novoPreco = preco - preco * 0.1;

    cout << "O novo preco com desconto de 10% é: " << novoPreco << "R$ ";
}