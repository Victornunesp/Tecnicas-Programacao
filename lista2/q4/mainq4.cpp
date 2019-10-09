#include <iostream>
#include "contacorrente.h"

using namespace std;

int main(){
    float lim = 0;
    float ini = 0;

    cout << "Informe o saldo da conta: ";
    cin >> ini;

    cout << "Informe o limite da conta: ";
    cin >> lim;

    ContaCorrente corrente(lim, ini);

    corrente.setup();

}
