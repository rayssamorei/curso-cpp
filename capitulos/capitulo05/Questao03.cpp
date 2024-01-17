/*
Faça um programa que receba a idade de oito pessoas, calcule e mostre:
a) a quantidade de pessoas em cada faixa etária;
b) a porcentagem de pessoas na primeira faixa etária com relação ao total de pessoas.
c) a porcentagem de pessoas na última faixa etária com relação ao total de pessoas
faiXa eTária idade
1° Até 15 anos
2° De 16 a 30 anos
3° De 31 a 45 anos
4° De 46 a 60 anos
5° Acima de 60 anos
*/
#include <iostream>
using namespace std;

int main() {
    int primFaixa = 0, segFaixa = 0, terFaixa = 0, quartFaixa = 0, quinFaixa = 0, idade = 0;
    double porcPrimFaixa = 0, porcQuinFaixa = 0;

    for(int i = 0; i < 8; i++){
        cout << "Informe a idade da " << i+1 << " pessoa: ";
        cin >> idade;

        if(idade <= 15){
            primFaixa++;
        } else if((idade >= 16) && (idade <= 30)){
            segFaixa++;
        } else if((idade >= 31) && (idade <= 45)){
            terFaixa++;
        } else if((idade >= 46) && (idade <= 60)){
            quartFaixa++;
        } else {
            quinFaixa++;
        }
    }
    porcPrimFaixa = primFaixa / 0.08;
    porcQuinFaixa = quinFaixa / 0.08;

    cout << "Quantidade de pessoas em cada faixa etaria: "<< endl;
    cout << "Primeira faixa etaria (ate 15 anos): " << primFaixa << endl;
    cout << "Segunda faixa etaria (16 a 30 anos): " << segFaixa << endl;
    cout << "Terceira faixa etaria (31 a 45 anos): " << terFaixa << endl;
    cout << "Quarta faixa etaria (46 a 60 anos): " << quartFaixa << endl;
    cout << "Quinta faixa etaria (acima de 60 anos): " << quinFaixa << "\n\n";
    cout << "Porcentagem de pessoas na primeira faixa etaria: " << porcPrimFaixa << endl;
    cout << "Porcentagem de pessoas na ultima faixa etaria: " << porcQuinFaixa << endl;
    return 0;
}
