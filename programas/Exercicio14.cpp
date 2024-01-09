//Aula 16 - exercicio sobre do while
/*
Desenvolva um programa que solicite ao usuário que insira uma senha. Use um loop do-while para continuar solicitando a senha até que ela corresponda a uma senha específica (por exemplo, "senha123").
*/
#include <iostream>
using namespace std;

int main(){
    string senhaCorreta = "senha123";
    string senhaUsuario;

    do{
        cout << "Digite a senha: ";
        cin >> senhaUsuario;

        if(senhaUsuario != senhaCorreta){
            cout << "Senha incorreta. Tente novamente. " << endl;
        }
    } while (senhaUsuario != senhaCorreta);

    cout << "Senha correta! Acesso concedido. " << endl;
    return 0;
}