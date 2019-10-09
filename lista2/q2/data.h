#ifndef DATA_H
#define DATA_H
#include <iostream>


using namespace std;

class Data{
    private:
        int dia;
        int mes;
        int ano;
    
    public:
        Data();
        Data(int d, int m, int a);

        void setDia(int d);
        void setMes(int m);
        void setAno(int a);

        int getDia(int d);
        int getMes(int m);
        int getAno(int a);

        void mostrarData();
        void obterData();
        
};
#endif
