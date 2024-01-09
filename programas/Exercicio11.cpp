//Aula 13 - Exercicios para fixar
/*Exercício: Menu de Opções
Crie um programa que exiba um menu para o usuário e realize diferentes ações com base na escolha feita. As opções do menu podem ser, por exemplo:

Calcular a área de um quadrado.
Calcular a área de um círculo.
Calcular a área de um triângulo.
Sair do programa.*/
#include <iostream>
#include <cmath>

using namespace std;
int main() {
    int op;
    double lado, raio, base, altura;

    cout << "Menu de opcoes. Escolha um numero: "<< endl;
    cout << "1 - Calcular a area de um quadrado." << endl;
    cout << "2 - Calcular a area de um circulo." << endl;
    cout << "3 - Calcular a area de um triangulo." << endl;
    cout << "4 - Sair do programa." << endl;
    cin >> op;

    switch (op)
    {
    case 1:
        cout << "Informe o lado do quadrado: " << endl;
        cin >> lado;
        cout << "A area do quadrado e: " << lado * lado;
        break;
    case 2:
        cout << "Informe o raio: " << endl;
        cin >> raio;
        cout << "A area do circulo e: " << M_PI * raio * raio << endl;
        break;
    case 3:
        cout << "Informe a base do triangulo para saber sua area: " << endl;
        cin >> base;
        cout << "Informe a altura do triangulo: " << endl;
        cin >> altura;
        cout << "A area do triangulo equivale a: " << (base * altura) / 2;
        break;
    case 4:
        cout << "Saindo do programa... " << endl;
        break;
    default:
        cout << "Opção inválida!" << endl;
        break;
    }

    return 0;
}