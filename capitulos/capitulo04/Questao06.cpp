/*
Faça um programa que receba dois números e execute uma das operações listadas a seguir, de acordo com a
escolha do usuário. Se for digitada uma opção inválida, mostre mensagem de erro e termine a execução do
programa. As opções são:
a) O primeiro número elevado ao segundo número.
b) Raiz quadrada de cada um dos números.
c) Raiz cúbica de cada um dos números
*/
#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double n1, n2, res, res2;
    int op;

    cout << "Informe o primeiro numero:" << endl;
    cin >> n1;
    cout << "Informe o segundo numero:" << endl;
    cin >> n2;

    cout << "Agora escolha uma das operacoes listadas:" << endl;
    cout << "1 - O primeiro numero elevado ao segundo numero." << endl;
    cout << "2 - Raiz quadrada de cada um dos numeros." << endl;
    cout << "3 - Raiz cubica de cada um dos numeros." << endl;
    cin >> op;

    switch (op)
    {
    case 1:
        res = pow(n2, n1);

        cout << "O numero " << n1 << " elevado ao numero " << n2 << " e: " << res;
        break;
    case 2:
        res = sqrt(n1);
        res2 = sqrt(n2);

        cout << "Raiz quadrada do primeiro numero: " << res << endl;
        cout << "Raiz quadrada do segundo numero: " << res2;
        break;
    case 3:
        res = cbrt(n1);
        res2 = cbrt(n2);

        cout << "Raiz cubica do primeiro numero: " << res << endl;
        cout << "Raiz cubica do segundo numero: " << res2;
        break;
    default:
        if(op == 0 || op > 3){
            cout << "Erro!";
        }
        break;
    }
    

    return 0;
}
