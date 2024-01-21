/*
Faça um programa que receba o nome de oito clientes e armazene-os em um vetor. Em um segundo vetor,
armazene a quantidade de DVDs locados em 2011 por cada um dos oito clientes. Sabe-se que, para cada
dez locações, o cliente tem direito a uma locação grátis. Faça um programa que mostre o nome de todos
os clientes, com a quantidade de locações grátis a que ele tem direito.
*/
#include <iostream>
using namespace std;

int main() {
    string nomes[8];
    int qtd[8];

    for(int i = 0; i < 8; i++){
        cout << "\nInforme o nome do " << i+1 << " cliente: ";
        cin >> nomes[i];
        cout << "\nInforme a quantidade de locacoes: ";
        cin >> qtd[i];
    }
    for(int i = 0; i < 8; i++){
        cout << "O total de locacoes gratis que o cliente (" << nomes[i] << ") tem direito e: " << qtd[i]/10;
        cout << "\n\n";
    }
    return 0;
}