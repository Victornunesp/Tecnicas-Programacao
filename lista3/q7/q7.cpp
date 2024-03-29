#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#include "sensor.h"
#include "arquivo.h"

using namespace std;

int main()
{
    vector<int> valores;
    vector<DadosSensor> vSensor;

    criarArquivo();
    setVetor(valores);
    vetorDados(valores, vSensor);
    show(vSensor);

    return 0;
}