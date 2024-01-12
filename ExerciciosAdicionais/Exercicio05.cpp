//Solicite ao usuário para inserir três números e os exiba em ordem crescente.
#include <iostream>
using namespace std;

int main() {
    double n1, n2, n3;

    cout << "Informe o numero um: ";
    cin >> n1;
    cout << "Informe o numero dois: ";
    cin >> n2;
    cout << "Informe o numero tres: ";
    cin >> n3;

    if (n1 > n2) {
        swap(n1, n2);
    }

    if (n2 > n3) {
        swap(n2, n3);
    }

    if (n1 > n2) {
        swap(n1, n2);
    }

    cout << "Os numeros em ordem crescente sao: " << n1 << ", " << n2 << ", " << n3 << endl;

    //funçao swap = serve para trocar os valores das variaveis sem usar outra variavel de auxilio
    return 0;
}