/*
Elabore uma sub-rotina que receba dois números como parâmetros e retorne 0, se o primeiro número for
divisível pelo segundo número. Caso contrário, deverá retornar o próximo divisor.
*/
#include <iostream>
using namespace std;

int divisor(int n1,int n2){
    
    if(n1 % n2 == 0){
        return 0;
    }
    int i = 0;
    int aux = 0;
    while(i < 1){
        if(n1 % (n2+aux) == 0){
            return n2+aux;
            i++;
        } else {
            aux++;
        }
    }
}
int main() {
    int n1 = 0, n2 = 0;
    cout << "Informe o primeiro numero: ";
    cin >> n1;
    cout << "Informe o segundo numero: ";
    cin >> n2;

    int res = divisor(n1, n2);
    cout << res;
    return 0;
}