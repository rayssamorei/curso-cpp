#include <iostream>
using namespace std;
//Calculadora feita a partir dos estudos de operadores matemáticos em C++.
int main () {

    int op;
    double n1, n2, res;

    cout << "Ola, seja bem-vindo a sua calculadora matematica. Escolha qual operação voce deseja fazer." << endl;
    cout << "1 - Soma" << "\n" << "2 - Subtracao" << "\n" << "3 - Multiplicacao" << "\n" << "4 - Divisao" << "\n";
    cin >> op;

    switch (op)
    {
    case 1:
        cout << "Insira um numero para efetuar sua soma: " << "\n";
        cin >> n1;
        cout << "Insira outro numero: " << "\n";
        cin >> n2;

        res = n1 + n2;

        cout << "O resultado da soma e: " << res;
        break;
    case 2:
        cout << "Insira um numero para efetuar sua subtracao: " << "\n";
        cin >> n1;
        cout << "Insira outro numero: " << "\n";
        cin >> n2;

        res = n1 - n2;

        cout << "O resultado da subtracao e: " << res;
        break;
    case 3:
        cout << "Insira um numero para efetuar sua multiplicacao: " << "\n";
        cin >> n1;
        cout << "Insira outro numero: " << "\n";
        cin >> n2;

        res = n1 * n2;

        cout << "O resultado da multiplicacao e: " << res;
        break;
    case 4:
        cout << "Insira um numero para efetuar sua divisao: " << "\n";
        cin >> n1;
        cout << "Insira outro numero: " << "\n";
        cin >> n2;

        res = n1 / n2;

        cout << "O resultado da divisao e: " << res;
        break;

        default:
        break;
    }
    return 0;
}