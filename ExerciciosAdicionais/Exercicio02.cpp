/*
dia da semana:
Peça ao usuário para inserir um número de 1 a 7 e exiba o dia correspondente da semana.
*/
#include <iostream>
using namespace std;

int main() {
    int num;
    
    cout << "Insira um numero de 1 a 7 para saber o dia da semana correspondente: ";
    cin >> num;

    switch (num)
    {
    case 1:
        cout << "O numero corresponde ao domingo!";
        break;
    case 2:
        cout << "O numero corresponde a segunda-feira!";
        break;
    case 3:
        cout << "O numero corresponde a terca-feira!";
        break;
    case 4:
        cout << "O numero corresponde a quarta-feira!";
        break;
    case 5:
        cout << "O numero corresponde a quinta-feira!";
        break;
    case 6:
        cout << "O numero corresponde a sexta-feira!";
        break;
    case 7:
        cout << "O numero corresponde ao sabado!";
        break;
    
    default:
        if(num > 7 || num <= 0){
            cout << "Numero invalido. Tente novamente";
        }
        break;
    }
    return 0;
}