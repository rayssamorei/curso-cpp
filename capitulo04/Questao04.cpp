//Faça um programa que receba três números e mostre o maior.
#include <iostream>
using namespace std;

int main() {
    int n1, n2, n3;

    cout << "Insira o primeiro numero: " << endl;
    cin >> n1;
    cout << "Insira o segundo numero: " << endl;
    cin >> n2;
    cout << "Insira o terceiro numero: " << endl;
    cin >> n3;

    if((n1 >= n2) && (n1 >= n3)){
        cout << "O maior e: " << n1;
    }else if((n2 >= n1) && (n2 >= n3)){
        cout << "O maior e: " << n2;
    }else if((n3 >= n2) && (n3 >= n1)){
        cout << "O maior e: " << n3;
    }

    return 0;
}