/*. O preço ao consumidor de um carro novo é a soma do custo de fábrica com
a porcentagem do distribuidor e dos impostos, ambos aplicados ao custo
de fábrica. As porcentagens encontram-se na tabela a
seguir. Faça um programa que receba o custo de fábrica de um carro e mostre
o preço ao consumidor.

Até R$ 12.000,00 - 5 - isento
Entre R$ 12.000,00 e R$ 25.000,00 - 10 - 15
Acima de R$ 25.000,00 - 15 - 20
*/
#include <iostream>
using namespace std;

int main(){
    double custoFabrica, preco, dist, impo;

    cout << "Informe o custo de fabrica: R$ ";
    cin >> custoFabrica;

    if(custoFabrica < 12000){
        dist = 0.05;
        impo = 0.0;
    } else if(custoFabrica <= 12000 && custoFabrica >= 25000){
        dist = 0.1;
        impo = 0.15;
    } else {
        dist = 0.15;
        impo = 0.2;
    }
    
    preco = custoFabrica + (custoFabrica * dist) + (custoFabrica * impo);

    cout << "O preco do carro e: R$ " << preco;
    return 0;
}