#include <iostream>
#include "sensor.h"

using namespace std;

DadosSensor::DadosSensor()
{
    valor = 0;
    frequencia = 0;
}

DadosSensor::DadosSensor(int val, int fre)
{
    valor = val;
    frequencia = fre;
}

int DadosSensor::getValor() { return valor; }

int DadosSensor::getFrequencia() { return frequencia; }

void DadosSensor::printDados()
{
    cout << "O valor: " << valor << ", tem frequencia: " << frequencia << endl;
}

void DadosSensor::dados(int val, int freq)
{
    valor = val;
    frequencia = freq;
}