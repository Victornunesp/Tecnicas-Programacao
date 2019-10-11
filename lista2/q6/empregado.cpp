#include "empregado.h"
#include <vector>
#define N_MIN 3
#define INICIAL 0
#define JANEIRO 0


using namespace std;
void Empregado::setNome(string n){
    if(n.size() < N_MIN){
        cout << "Nome invalido!";
    }else{
        nome = n;
    }
}

void Empregado::setSobrenome(string s){
    if(s.size() < N_MIN){
        cout << "Sobrenome invalido!";
    }else{
        sobrenome = s;
    }
}

void Empregado::setSalario(float d){
    if(d > INICIAL){
        salario = d;
    }else{
        salario = INICIAL;
    }
}

string Empregado::getNome(){
     return nome; 
}

string Empregado::getSobrenome(){
    return sobrenome;
}
    
float Empregado::getSalario(float n){
    return salario*n;
}

void Empregado::obterDados(){
    string tempNome;
    string tempSobrenome;
    float tempSalario;
    
    cout << endl << "Digite nome do funcionário: ";
    cin >> tempNome;
    cout << "Digite o sobrenome: ";
    cin >> tempSobrenome;
    cout << "Digite o salário: ";
    cin >> tempSalario;

    setNome(tempNome);
    setSobrenome(tempSobrenome);
    setSalario(tempSalario);
}

void Empregado::mostraDados(float n){

    if(n > 1){
        cout << endl << endl << "Aumento de " << n-1 <<"% no salario" << endl;
    }

    cout << endl << "Nome: " << getNome() <<" " << getSobrenome() << endl << endl;
    for(int k = 0; k < 12; k++){
        cout << "Mes: " << k+1 << " - " << " Salario R$: " << getSalario(n) << endl; 
    }
    cout << "Total\tR$: " << getSalario(n)*12 << endl;
}



void Empregado::getAumento(){
    salario *= 1.10;
}
