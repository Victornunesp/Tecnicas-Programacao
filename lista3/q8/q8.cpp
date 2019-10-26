#include <iostream>
#include <vector>
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
    
    stable_sort(vSensor.begin(), vSensor.end(), ordenarFreq);
    
    show(vSensor);


    return 0;
}
