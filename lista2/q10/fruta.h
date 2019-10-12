#ifndef FRUTA_H
#define FRUTA_H
#include <iostream>

using namespace std;

class Fruta{
   
    protected:
        
        string nome;
        string cor;
    
    public:
        
        Fruta();
        Fruta(string n, string c);

        void setNome(string n);
        void setCor(string c);

        string getNome();
        string getCor();
};
#endif