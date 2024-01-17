/*
Uma empresa fez uma pesquisa de mercado para saber se as pessoas gostaram ou não de um novo produto lançado. Para isso, forneceu o sexo do entrevistado e sua resposta (S — sim; ou N — não). Sabe-se
que foram entrevistadas dez pessoas. Faça um programa que calcule e mostre:
■■ o número de pessoas que responderam sim;
■■ o número de pessoas que responderam não;
■■ o número de mulheres que responderam sim; e
■■ a percentagem de homens que responderam não, entre todos os homens analisados.
*/
#include <iostream>
#include <iomanip>
//biblioteca utilizada para tornar a variavel com a porcentagem mais precisa;
using namespace std;

int main() {
    char res, sexo;
    int qtdSim = 0, qtdMulheresSim = 0, qtdNao = 0, qtdHomemNao = 0, numeroHomens = 0;
    double porc = 0;
    for(int i = 0; i < 10; i++){
        cout << "Informe seu sexo: (F feminino e M masculino)" << "\n";
        cin >> sexo;
        cout << "Gostou do novo produto lancado pela a empresa? (S para sim, N para nao)" << "\n";
        cin >> res;

        if(res == 's' || res == 'S'){
            qtdSim++;
            if(sexo == 'f' || sexo == 'F'){
                qtdMulheresSim++;
            }
            if(sexo == 'm' || sexo == 'M'){
                numeroHomens++;
            }
        } else if(res == 'n' || res == 'N'){
            qtdNao++;
            if(sexo == 'm' || sexo == 'M'){
                qtdHomemNao++;
                numeroHomens++;
            }
        }
    }
    porc = (numeroHomens == 0) ? 0 : (double) qtdHomemNao / numeroHomens * 100;
    
    cout << "A quantidade de pessoas que responderam sim: " << qtdSim;
    cout << "\nQuantidade de mulheres que responderam sim: " << qtdMulheresSim;
    cout << "\nQuantidade de pessoas que responderam nao: " << qtdNao;
    cout << "\nPorcentagem de homens que responderam nao: " << fixed << setprecision(1) << porc;
    return 0;
}