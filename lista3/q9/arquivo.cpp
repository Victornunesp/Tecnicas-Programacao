#include "arquivo.h"

#define QNT_GERADA 500
#define INTERVALO 1000

void criarArquivo()
{
    ofstream randomfile;

    randomfile.open("random.txt");
    int random;

    srand(time(NULL));
    for (int i = 0; i < QNT_GERADA; i++)
    {
        random = rand() % INTERVALO;
        randomfile << random << endl;
    }
    randomfile.close();
}

void setVetor(vector<int> &v)
{
    ifstream randomfile;
    int temp = 0;

    randomfile.open("random.txt");

    while (randomfile >> temp)
        v.push_back(temp);

    randomfile.close();

    sort(v.begin(), v.end());
}

void mostrarVetor(vector<int> &v)
{
    int cont = 0;
    for (auto i : v)
    {
        cout << i << "     [" << cont + 1 << "]" << endl;
        cont++;
    }
    cout << endl;
}

bool repetido(int busca, int indice, vector<int> v)
{
    bool chave = true;
    for (; indice < v.size(); indice++)
    {
        if (v[indice + 1] == busca)
        {
            chave = false;
            break;
        }
    }

    return chave;
}

bool ordenarFreq(DadosSensor a, DadosSensor b)
{
    return a.getFrequencia() >= b.getFrequencia();
}

void ordernarClasse(vector<DadosSensor> &vSensor)
{
    stable_sort(vSensor.begin(), vSensor.end(), ordenarFreq);
}

void vetorDados(vector<int> v, vector<DadosSensor> &vSensor)
{
    for (int i = 0; i < v.size(); i++)
    {
        if (repetido(v[i], i, v))
        {
            vSensor.push_back(DadosSensor(v[i], count(v.begin(), v.end(), v[i])));
        }
    }
}

void show(vector<DadosSensor> &vSensor)
{
    for (auto elemento : vSensor)
    {
        elemento.printDados();
    }

    cout << endl;
}