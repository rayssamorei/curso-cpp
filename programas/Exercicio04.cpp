#include <iostream>
using namespace std;
//Aula de variaveis locais e globais, operadores matematicos

int n1, n2; //variaveis globais

int main (){

    //Operadores matemáticos: + - / * % ()

    int n3, n4, res; //variaveis locais

    n1 = 11;
    n2 = 3;
    n3 = 5;
    n4 = 2;

    res = n1 + n2 + n3 + n4;

    cout << "A soma dos numeros é:" << res;

    return 0;
}