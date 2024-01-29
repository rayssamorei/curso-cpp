//Faça uma sub-rotina que receba um valor inteiro e verifique se ele é positivo ou negativo.
#include <iostream>
using namespace std;

string verificacao(int n){
    string veri;
    if(n < 0){
        veri = "Negativo";
    } else {
        veri = "Positivo";
    }
    return veri;
}
int main() {
    int num = 0;
    cout << "Informe um numero inteiro: ";
    cin >> num;

    string ver = verificacao(num);

    cout << "O numero " << num << " e: " << ver;
    return 0;
}