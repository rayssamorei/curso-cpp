/* Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo
segundo.*/
#include <iostream>
using namespace std;

int main(){
    int n1, n2, res;

    cout << "Informe o primeiro numero para saber sua subtracao pelo o segundo: " << endl;
    cin >> n1;
    cout << "Informe o segundo numero: " << endl;
    cin >> n2;

    res = n1 - n2;

    cout << "O resultado e: " << res;
    
    return 0;
}