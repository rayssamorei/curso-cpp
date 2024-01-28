/*
Crie uma sub-rotina que receba três números inteiros como parâmetros, representando horas, minutos e segundos, e os converta em segundos. Exemplo: 2h, 40min e 10s correspondem a 9.610 segundos.
*/
#include <iostream>
using namespace std;

int conversao(int hr, int min, int seg){
    int res = 0;

    if(hr < 0 || min < 0 || seg < 0){
        cout << "Insira um valor positivo.";
        return -1;
    }

    res = hr * 3600 + min * 60 + seg;

    return res;
}
int main() {
    int hrs = 0, min = 0, segs = 0;

    cout << "Insira as horas: ";
    cin >> hrs;
    cout << "Insira os minutos: ";
    cin >> min;
    cout << "Insira os segundos: ";
    cin >> segs;

    int res = conversao(hrs, min, segs);

    cout << hrs << "h, " << min << "min, " << segs << "s " << "correspondem a: " << res;
    return 0;
}