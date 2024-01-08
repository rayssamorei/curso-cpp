//Faça um programa que calcule e mostre a área de um losango. Sabe-se que: A = (diagonal maior * diagonal menor)/2.
#include <iostream>
using namespace std;

int main () {
    double diagMaior, diagMenor, area;

    cout << "Informe a diagonal maior do losango: " << endl;
    cin >> diagMaior;
    cout << "Informe a diagonal menor do losango: " << endl;
    cin >> diagMenor;
    
    area = (diagMaior * diagMenor)/2;

    cout << "A area do losango e: " << area;

    return 0;
}