#include <iostream>
#include "empregado.h"
#include <vector>

using namespace std;

int main(){

    string continuar;
    float n = 1;
    vector <Empregado> emp;

    do{
        Empregado temp;
        temp.obterDados();
        emp.push_back(temp);

        cout << "Deseja continuar? |s| ou |n|: ";
        cin >> continuar;

    }while(continuar == "s");



    for(int i = 0; i < emp.size(); i++){
        emp[i].mostraDados(n);
    }
    
    n = 1.10; 

    for(int i = 0; i < emp.size(); i++){
        emp[i].mostraDados(n);
    }

    return 0;
}