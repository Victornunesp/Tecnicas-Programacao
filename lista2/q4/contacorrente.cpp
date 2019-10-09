#include "contacorrente.h"
#define LIM_MIN 0
#define INICIAL 0

ContaCorrente::ContaCorrente() : Conta(0){
    limite = LIM_MIN;
}
ContaCorrente::ContaCorrente(float lim, float ini) : Conta(ini){
    setLimite(INICIAL);
}

void ContaCorrente::setLimite(float lim){
    if(lim >= LIM_MIN) limite = lim;
    else{
        cout << "Limite inválido.\n";
        limite = LIM_MIN;
    }
    total = getSaldo() + getLimite();
}

float ContaCorrente::getLimite(){
    return limite;
}

void ContaCorrente::saldoTotal(){
    cout << "O saldo total é de R$" << fixed << setprecision(2) << total << endl;
}