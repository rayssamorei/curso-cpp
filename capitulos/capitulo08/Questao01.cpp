/*
Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro e retorne a soma dos números inteiros existentes entre o número 1 e N (inclusive).
*/
#include <iostream>
using namespace std;

int soma(int n){
    int res = 0;
    for(int i = 1; i <= n; i++){
        res += i;
    }
    return res;
}
int main() {
    int n = 0, res = 0;

    cout << "Informe um numero inteiro e positivo: ";
    cin >> n;
    
    res = soma(n);

    cout << "A soma dos numeros de 1 a N e: " << res;
    return 0;
}
