/*
Faça um programa que receba dez números, calcule e mostre a soma dos números pares e a soma dos
números primos.
*/
#include <iostream>
using namespace std;

bool primo(int numero) {
    if (numero < 2) {
        return false;
    } else {
        for (int i = 2; i < numero; ++i) {
            if (numero % i == 0) {
                return false;
                break;
            }
        }
        return true;
    }

    return true;
}

int main(){
    int num = 0, somaPares = 0, somaPrimos = 0;
    for(int i = 0; i < 10; i++){
        cout << "Informe o numero " << i+1 << ": ";
        cin >> num;

        if(num  % 2 == 0){
            somaPares+=num;
        } else {
            if(primo(num)){
                somaPrimos+=num;
            }
        }
    }
    cout << "A soma dos numeros pares e: " << somaPares << endl;
    cout << "A soma dos numeros primos e: " << somaPrimos;
    return 0;
}