#include "data.h"
#define JAN 1
#define DEZ 12

using namespace std;

Data::Data(){
    setDia(0);
    setMes(0);
    setAno(0);
}

Data::Data(int d, int m, int a){
    setDia(d);
    setMes(m);
    setAno(a);
            
}

void Data::setDia(int d){
    dia = d;
}

void Data::setMes(int m){
    if((m >= JAN) and (m <= DEZ)){
        mes = m;
    }
    else{
        mes = JAN;
    }
}

void Data::setAno(int a){
    ano = a;
}

int Data::getDia(int d){
    return dia;
}

int Data::getMes(int m){
    return mes;
}

int Data::getAno(int a){
    return ano;
}
void Data::obterData(){
    int tempdia;
    int tempmes;
    int tempano;

    cout << "Informe dia:\n";
    cin >> tempdia;
    setDia(tempdia);
    cout << "Informe mês:\n";
    cin >> tempmes;
    setMes(tempmes);
    cout << "Informe ano:\n";
    cin >> tempano;
    setAno(tempano);
}

void Data::mostrarData(){
    cout << "A data é: " << dia << "/0" << mes << "/" << ano << endl;
}
