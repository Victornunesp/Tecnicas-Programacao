#include "conta.h"

using namespace std;

Conta::Conta(){
    saldo = 0;
}

Conta::Conta(float ini){
    saldo = ini;
}

void Conta::setup(){

    int op = 0;

    cout << "\n\n|Operações|\n\n";
    cout << "Cancelar        |0|" << endl;
    cout << "Consultar saldo |1|" << endl;
    cout << "Fazer saque     |2| " << endl;
    cout << "Fazer depósito  |3|\n\n" << endl;

    cout << "Informe o código da operação desejada: ";
    cin >> op;

    while (op != 0){
        
        switch(op){

            case 1:

                consultarSaldo();
                break;

            case 2:

                fazerSaque();
                break;

            case 3:

                fazerDeposito();
                break;

            default:

                cout << "Operação não encontrada!\n\nTente novamente: ";
                cin >> op;
                break;      
        }
        cout << "\nDeseja fazer outra operação?\n |0| cancela \n ";
        cin >> op;
    }
}

void Conta::fazerDeposito(){

    float deposito = 0;

    cout << "Informe quantia a depositar na conta: ";
    cin >> deposito;
    
    if(deposito < 0) cout << "Depósito inválido!" << endl;
    else saldo += deposito;
}

void Conta::fazerSaque(){
    
    float saque = 0;

    cout << "Informe a quantia a retirar da conta: ";
    cin >> saque;

    if(saque < 0 and saque > saldo) cout << "Saque inválido!" << endl;
    else saldo -= saque;
}

void Conta::consultarSaldo(){

    cout << "Saldo atual atual: R$" << fixed << setprecision(2) << getSaldo() << endl;
}

float Conta::getSaldo(){

    return saldo;
}
