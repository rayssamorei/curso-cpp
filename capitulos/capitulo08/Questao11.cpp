/*
Faça uma sub-rotina que receba como parâmetro um valor inteiro e positivo N, indicando a quantidade
de parcelas de uma soma S, calculada pela fórmula:
S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... + (n2 + 1)/(n + 3)
*/

#include <iostream>
using namespace std;

double soma(int n){
    double soma = 0.0;
    int numerador = 2;
    for (int i = 4; i <= n + 3; i++) {
        soma += (double) (numerador + i * i) / i;
    }
    return soma;
}
int main() {
    int n = 0;
    cout << "Insira um numero inteiro e positivo: ";
    cin >> n;

    double res = soma(n);

    cout << "O valor da soma de S e: " << res;
    return 0;
}