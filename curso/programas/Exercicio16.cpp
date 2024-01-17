//Aula 18 - Array / Vetor
#include <iostream>
using namespace std;

int main() {
    int cont = 0;
    int vetor [5];
    //int vetor[5] = {10, 20, 30, 40, 50};

    for(int i = 0; i < 5; i++){
        cont+= 10;
        vetor[i] = cont;
        cout << vetor[i] << endl;
    }
    return 0;
}
