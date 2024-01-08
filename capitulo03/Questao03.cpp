/*Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo
segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar
com validações. */
#include <iostream>
using namespace std;

int main() {
    int n1, n2, res;

    cout << "Informe o primeiro numero para saber sua divisao pelo o segundo: " << endl;
    cin >> n1;
    cout << "Informe o segundo numero: " << endl;
    cin >> n2;
    
    res = n1 / n2;

    cout << "O resultado da divisao e: " << res;
    
    return 0;
}