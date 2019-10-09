#include <iostream>
#include "conta.h"

using namespace std;

int main(){
    float ini = 0;
    char continuar;    
    
    cout << "Informe o saldo da primeira conta: ";
    cin >> ini;
    Conta conta_a(ini);

    cout << "Informe saldo da segunda conta: ";
    cin >> ini;    
    Conta conta_b(ini);

    while(continuar != 'n'){
        int acc = 0;
        cout << "Deseja manipular" << endl;
        cout << "Primeira |1| ou Segunda |2| conta?" << endl;
        cin >> acc;

        if(acc == 1) conta_a.setup();
        if(acc == 2) conta_b.setup();
        
        cout << "Continuar manipulação de contas ?" << endl;
        cout << "Sim |s| ou Não |n|" << endl;
        cin >> continuar;
    
    }
    return 0;
}