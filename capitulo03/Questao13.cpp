//Faça um programa que calcule e mostre a tabuada de um número digitado pelo usuário.
#include <iostream>
using namespace std;

int main(){
    int num;

    cout << "Digite um numero para ver sua tabuada: " << endl;
    cin >> num;

    for(int i = 0; i <= 10; i++){
        cout << num << " x " << i << " = " << i*num << endl;
    }
    return 0;
}