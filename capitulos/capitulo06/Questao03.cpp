/*
Faça um programa para controlar o estoque de mercadorias de uma empresa. Inicialmente, o programa deverá preencher dois vetores com dez posições cada, onde o primeiro corresponde ao código do produto e o
segundo, ao total desse produto em estoque. Logo após, o programa deverá ler um conjunto indeterminado
de dados contendo o código de um cliente e o código do produto que ele deseja comprar, juntamente com a
quantidade. Código do cliente igual a zero indica fim do programa. O programa deverá verificar:
■■ se o código do produto solicitado existe. Se existir, tentar atender ao pedido; caso contrário, exibir
mensagem Código inexistente;
■■ cada pedido feito por um cliente só pode ser atendido integralmente. Caso isso não seja possível,
escrever a mensagem Não temos estoque suficiente dessa mercadoria. Se puder atendê-lo, escrever
a mensagem Pedido atendido. Obrigado e volte sempre;
■■ efetuar a atualização do estoque somente se o pedido for atendido integralmente;
■■ no final do programa, escrever os códigos dos produtos com seus respectivos estoques já atualizados.
*/
#include <iostream>
using namespace std;

int main() {
    int codigoProd[10];
    int estoqueProd[10];
    int codigoCliente = 0, codigoProdDesejado = 0, qtdProdDesejado = 0, indiceProd = 0;

    for(int i = 0; i < 10; i++){
        cout << "\nInforme o codigo do produto: ";
        cin >> codigoProd[i];
        cout << "\nInforme o total desse produto no estoque: ";
        cin >> estoqueProd[i];
    }

    while(true) {
        cout << "\nInforme o codigo do cliente (0 para encerrar): ";
        cin >> codigoCliente;

        if (codigoCliente == 0){
            break;
        }

        for (int i = 0; i < 10; i++) {
            if (codigoProd[i] == codigoProdDesejado) {
                indiceProd = i;
                break;
            }
        }

        if (indiceProd == -1) {
            cout << "\nCodigo inexistente.";
        } else {
            if(estoqueProd[indiceProd] >= qtdProdDesejado) {
                estoqueProd[indiceProd] -= qtdProdDesejado;
                cout << "\nPedido atendido. Obrigado e volte sempre.";
            } else {
                cout << "\nNao temos estoque suficiente dessa mercadoria.";
            }
        }
    }

    cout << "\nEstoque atualizado:";

    for (int i = 0; i < 10; i++) {
        cout << "\nCodigo: " << codigoProd[i] << ", Estoque: " << estoqueProd[i];
    }
    return 0;
}