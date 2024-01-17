/*
Faça um programa que receba dois números e execute as operações listadas a seguir, de acordo com a escolha
do usuário.
1 Média entre os números digitados
2 Diferença do maior pelo menor
3 Produto entre os números digitados
4 Divisão do primeiro pelo segundo
Se a opção digitada for inválida, mostre uma mensagem de erro e termine a execução do programa.
Lembre-se de que, na operação 4, o segundo número deve ser diferente de zero.
*/
#include <iostream>
using namespace std;

int main() {
    double n1, n2, res;
    int op;

    cout << "Insira o primeiro numero: " << endl;
    cin >> n1;
    cout << "Insira o segundo numero: " << endl;
    cin >> n2;

    cout << "Escolha a seguir uma opcao: " << endl;
    cout << "1 - Media entre os numeros digitados" << endl;
    cout << "2 - Diferenca do maior pelo menor" << endl;
    cout << "3 - Produto entre os números digitados" << endl;
    cout << "4 - Divisso do primeiro pelo segundo" << endl;
    cin >> op;

    switch (op) {
        case 1:
            res = (n1 + n2)/2;
            break;
        case 2:
            if(n1> n2){
                res = n1 - n2;
            } else {
                res = n2 - n1;
            }
            break;
        case 3:
            res = n1 * n2;
            break;
        case 4:
            if(n2 != 0){
                res = n1 / n2;
            } else {
                res = 0;
            }
            
            break;
        default: res = 0;
            break;
    }

    if (res != 0){
        cout << "O resultado da operacao e: " << res;
    } else {
        cout << "Operacao invalida!";
    }
    return 0;
}