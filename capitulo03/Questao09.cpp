/*Faça um programa que calcule e mostre a área de um trapézio.
Sabe-se que: A = ((base maior + base menor) * altura)/2
*/
#include <iostream>
using namespace std;

int main(){
    double baseMaior, baseMenor, area, altura;

    cout << "Informe a base maior do trapezio: " << endl;
    cin >> baseMaior;
    cout << "Informe a base menor do trapezio: " << endl;
    cin >> baseMenor;
    cout << "Informe a altura do trapezio: " << endl;
    cin >> altura;


    area = ((baseMaior + baseMenor) * altura)/2;

    cout << "A area do trapezio e: " << area;

    return 0;
}