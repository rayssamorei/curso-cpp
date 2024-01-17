//Exercicio para fixar conteúdo da aula 14, sobre while.
//Peça ao usuário para digitar um número e calcule o fatorial desse número usando um loop while.
#include <iostream>
using namespace std;

int main(){
    int num, cont, fat = 1;

    cout << "Insira um numero para saber seu fatorial" << endl;
    cin >> num;

    if(num < 0){
        cout << "Numero negativo tem o fatorial indefinido.";
    } else {
        cont = 1;
    }

    while (cont <= num){
        fat *= cont;
        cont++;
    }

    cout << "O fatorial de " << num << " equivale a: " << fat;

    return 0;
}