//Faça um programa que receba três números, calcule e mostre a multiplicação desses números.

#include <iostream>
using namespace std;

int main(){
    int n1, n2, n3, res;

    cout << "Informe o primeiro numero para efetuar sua multiplicacao: " << endl;
    cin >> n1;
    cout << "Informe o segundo numero: " << endl;
    cin >> n2;
    cout << "Informe o terceiro numero: " << endl;
    cin >> n3;

    res = n1 * n2 * n3;

    cout << "O resultado da multiplicacao dos tres numeros e: " << res;

    return 0;
}