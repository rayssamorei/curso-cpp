/*Solicite ao usuário para inserir as coordenadas (x, y) de um ponto no plano cartesiano e determine em qual quadrante ele se encontra.*/
#include <iostream>
using namespace std;

int main() {
    double x, y;
    string quadrante;

    cout << "Insira a coordenada x: ";
    cin >> x;
    cout << "Insira a coordenada y: ";
    cin >> y;

    if(x > 0 && y > 0){
        quadrante = "primeiro quadrante";
    } else if (x < 0 && y > 0){
        quadrante = "segundo quadrante";
    } else if (x < 0 && y < 0){
        quadrante = "terceiro quadrante";
    } else if (x > 0 && y < 0){
        quadrante = "quarto quadrante";
    } else if (x == 0 && y == 0){
        quadrante = "origem";
    } else if (x == 0){
        quadrante = "sobre o eixo y";
    } else if (y == 0){
        quadrante = "sobre o eixo x";
    }

    cout << "O quadrante e: " << quadrante;
    return 0;
}
