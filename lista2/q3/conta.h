#ifndef CONTA_H
#define CONTA_H
#include <iostream>
#include <iomanip>

using namespace std;

class Conta{
    private:

        float saldo;

    public:

        Conta(float ini);

        void setup();

        void fazerDeposito();
        void fazerSaque();
        void consultarSaldo();

        float getSaldo();

};
#endif
