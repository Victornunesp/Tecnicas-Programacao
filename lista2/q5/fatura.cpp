#include <iostream>
#include "fatura.h"
#define INICIAL 0
#define NUMSERIESTD 00000000
#define TAMAXDES 16
#define CASAS 2

using namespace std;

Fatura::Fatura(){

    setNumSerie(NUMSERIESTD);
    setDescricao("Item");
    setQuantidade(INICIAL);
    setValor(INICIAL);
}

Fatura::Fatura(string s, string d, int q, float v){

    setNumSerie(s);
    setDescricao(d);
    setQuantidade(q);
    setValor(v);
}

void Fatura::setNumSerie(string s){

    numSerie = s;
}

void Fatura::setDescricao(string d){

    int tamanho = INICIAL;
    int i = INICIAL;

    tamanho = d.size();

    while((i <= TAMAXDES and i <= tamanho)){

        descricao += d[i++];
    }
}

void Fatura::setQuantidade(int q){

    if(q >= INICIAL) quantidade = q;
    else quantidade = INICIAL;
}

void Fatura::setValor(float v){

    if(v >= INICIAL) valor = v;
    else valor = INICIAL;
}

void Fatura::mostrarFatura(){

    cout << "\n\n  |PRODUTO| " << getNumSerie() << endl;
    cout << "Descrito como: " << getDesc() << endl;
    cout << getQuantidade() << " unidade(s)" << endl;
    cout << "\n\nVALOR TOTAL\t";
    cout << "R$ " << fixed << setprecision(CASAS) << getQuantidade()*getValor();
    cout << endl << endl;
}

string Fatura::getNumSerie(){

    return numSerie;
}

string Fatura::getDesc(){

    return descricao;
}

int Fatura::getQuantidade(){

    return quantidade;
}

float Fatura::getValor(){

    return valor;
}