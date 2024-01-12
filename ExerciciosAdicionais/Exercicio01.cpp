/*
verificar número par ou impar:
peça ao usuário para inserir um número e informe se é par ou ímpar.
*/
#include <iostream>
using namespace std;

int main() {
    int num;

    cout << "Informe o numero para a verificacao se este e impar ou par: ";
    cin >> num;

    if(num % 2 == 0){
        cout << "O numero que voce inseriu e par!";
    } else {
        cout << "O numero e impar!";
    }

    return 0;
}