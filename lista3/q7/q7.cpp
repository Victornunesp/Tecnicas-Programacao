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

    for (int i = 0; i < valores.size(); i++)
    {
        if (repetido(valores[i], i, valores))
        {
            vSensor.push_back(DadosSensor(valores[i], count(valores.begin(), valores.end(), valores[i])));
        }
    }

    for (auto elemento : vSensor)
        elemento.printDados();

    return 0;
}