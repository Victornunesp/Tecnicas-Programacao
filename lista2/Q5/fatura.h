#ifndef FATURA_H
#define FATURA_H
#include <iostream>
#include <iomanip>

using namespace std;

class Fatura{

    private:

        string numSerie;
        string descricao;
        int quant;
        float valor;

    public:

    Fatura();
    Fatura(string s, string d, int q, float v); 

    void setNumSerie(string s); 
    void setDescricao(string d); 
    void setQuantidade(int q); 
    void setValor(float v);

    void mostrarFatura();
 
    string getNumSerie(); 
    string getDescricao(); 
    int getQuantidade(); 
    float getValor(); 
};  
#endif