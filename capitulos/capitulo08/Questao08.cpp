/*
Faça uma sub-rotina que receba um valor inteiro e positivo, calcule e mostre seu fatorial.
*/
#include <iostream>
using namespace std;

int fatorial(int num){
    int cont = 0, fat = 1;
    if(num < 0){
        cout << "Numero negativo tem o fatorial indefinido.";
    } else {
        cont = 1;
    }

    while (cont <= num){
        fat *= cont;
        cont++;
    }
    return fat;
}
int main(){
    int num;

    cout << "Informe um numero para saber seu fatorial: ";
    cin >> num;

    int res = fatorial(num);
    cout << "O fatorial de " << num << " e: " << res;

    return 0;
}