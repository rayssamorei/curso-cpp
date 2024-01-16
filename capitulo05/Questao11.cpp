/*
Faça um programa que receba o valor de um carro e mostre uma tabela com os seguintes dados: preço
final, quantidade de parcelas e valor da parcela. Considere o seguinte:
■■ o preço final para compra à vista tem desconto de 20%;
■■ a quantidade de parcelas pode ser: 6, 12, 18, 24, 30, 36, 42, 48, 54 e 60; e
■■ os percentuais de acréscimo encontram-se na tabela a seguir.
Quantidade de parcelas - percenTual de acréscimo sobre o preço final
6 3%
12 6%
18 9%
24 12%
30 15%
36 18%
42 21%
48 24%
54 27%
60 30%
*/
#include <iostream>
using namespace std;

int main(){
    double valCarro = 0, precoFin = 0, valParc = 0, acres = 0;

    cout << "Informe o valor do carro: R$ ";
    cin >> valCarro;

    for (int i = 6; i <= 60; i = i + 6) {
        acres = i/2;
        valParc = (valCarro / i) + (acres/100);
        precoFin = valCarro + (valCarro * acres/100);
        cout << "\nParcelas: " << i << "\nAcrescimo: " << acres;;
        cout << "\nValor parcela: " << valParc << "\nPreco final: " << precoFin << "\n\n";
    }
    return 0;
}
