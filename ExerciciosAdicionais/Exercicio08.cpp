/*
Peça ao usuário para inserir os coeficientes de uma equação quadrática (ax² + bx + c = 0) e calcule as raízes usando a fórmula de Bhaskara
*/
#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double a, b, c, delta, x1, x2;

    cout << "Insira o coeficiente a: ";
    cin >> a;
    cout << "Insira o coeficiente b: ";
    cin >> b;
    cout << "Insira o coeficiente c: ";
    cin >> c;

    delta = (b * b) + (a * 4 * c);

    if(delta > 0) {
        x1 = (-b + sqrt(delta)) / (2*a);
        x2 = (-b + sqrt(delta)) / (2*a);

        cout << "As raizes sao reais e distintas: " << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    } else if (delta == 0) {
        x1 = -b / (2*a);

        cout << "A raiz e real e dupla: " << endl;
        cout << "x1 = " << x1 << endl;
    } else {
        cout << "Nao tem raiz.";
    }


    return 0;
}