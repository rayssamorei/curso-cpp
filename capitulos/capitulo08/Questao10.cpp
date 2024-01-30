/*
Elabore uma sub-rotina que receba como parâmetro um valor N (inteiro e maior ou igual a 1) e determine o valor da sequência S, descrita a seguir:
S = 1 + 1/2 + 1/3...
*/
#include <iostream>
using namespace std;

int seq(int n){
    double soma = 0.0;

    for(int i = 1; i <= n; i++){
        soma += 1.0 / i;
    }

    return soma;
}
int main(){
    int n;

    cout << "Informe um valor para N: ";
    cin >> n;

    int res = seq(n);

    cout << "O valor da sequencia S de N e: " << res;
    return 0;
}