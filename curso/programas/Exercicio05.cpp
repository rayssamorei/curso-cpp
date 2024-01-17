#include <iostream>
using namespace std;
//Aula sobre incremento e decremento de variaveis, operadores pos e pre-fixados
int main(){
    int n1 = 0;
    
    cout <<"Numero inicial: " << n1 << "\n\n";

    n1++;

    cout << "Incremento: " << n1 << "\n\n";

    n1--;

    cout << "Decremento: " << n1 << "\n\n";

    //n1*=2 - n1 = n1*2
    //n1-=2 - n1 = n1-2
    //n1/=2 - n1 = n1/2
    //n1+=2 - n1 = n1+2


    //pós incremento = n1++ - primeiro usa o valor e depois incrementa.
    //pré incremento = ++n1 - primeiro incrementa depois usa o valor.

    //--n1 e n1--

    n1 = 10;

    cout << "Numero atual: " << n1 << endl;

    cout << "Pos incremento " << n1++ << endl;
    cout << "Pre incremento " << ++n1 << "\n\n";


    n1 = 10;

    cout << "Pos decremento " << n1-- << endl;
    cout << "Pre decremento " <<--n1 << endl;
    

    
    return 0;
}