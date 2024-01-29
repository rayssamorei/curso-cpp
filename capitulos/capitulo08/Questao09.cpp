/*
Crie uma sub-rotina que receba como parâmetro um valor inteiro e positivo e retorne a soma dos divisores
desse valor.
*/
#include <iostream>
using namespace std;

int div(int num){
    int soma = 0;
    
    for(int i = 1; i <= num; i++){
        if(num % i == 0){
            soma += i;
        }
    }
    return soma;
}
int main() {
    int num = 0;

    cout << "Informe um numero inteiro e positivo: ";
    cin >> num;

    int resSoma = div(num);

    cout << "O resultado da soma dos divisores de " << num << " e: " << resSoma;
    return 0;
}