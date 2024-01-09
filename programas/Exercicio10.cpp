//Aula 12 - Exercicios
/*
Implemente um código que verifique se um número é múltiplo de 3 e, se for, retorne "É múltiplo de 3", caso contrário, retorne "Não é múltiplo de 3".
*/
#include <iostream>
using namespace std;

int main () {
    int num;
    string verif;

    cout << "Insira um numero para verificar se ele e multiplo de 3: " << endl;
    cin >> num;

    verif = num % 3 == 0 ? "E multiplo de 3" : "Nao e multiplo de 3";

    cout << verif;
    return 0;
}