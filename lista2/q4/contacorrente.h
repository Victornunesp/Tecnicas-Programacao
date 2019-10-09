#ifndef CONTACORRENTE_H
#define CONTACORRENTE_H
#include <iostream>
#include <iomanip>
#include "conta.h"

using namespace std;

class ContaCorrente : public Conta{
    
    protected:

        float limite;
        float total;

    public:

        ContaCorrente();
        ContaCorrente(float lim, float ini);

        void setLimite(float lim);

        float getLimite();
        float getSaldoLimite();

        void saldoTotal();
};

#endif