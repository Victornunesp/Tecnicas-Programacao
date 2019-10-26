#include <iostream>
#include <vector>
#include <fstream>
#include "sensor.h"
#include <iomanip>
#include "arquivo.h"

using namespace std;

int main()
{

    vector<int> valores;
    vector<DadosSensor> vSensor;
    ofstream arquivoq9;

    criarArquivo();
    setVetor(valores);
    vetorDados(valores, vSensor);

    arquivoq9.open("q9.txt");

    arquivoq9 << "Valor" << setw(17) << "Frequência" << endl;

    ordernarClasse(vSensor);

    for (auto elemento : vSensor)
    {
        arquivoq9 << elemento.getValor() << setw(10) << elemento.getFrequencia() << endl;
    }

    arquivoq9.close();

    show(vSensor);

    return 0;
}
