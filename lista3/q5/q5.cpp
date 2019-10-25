#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#define QNT_GERADA 500
#define INTERVALO 1000
#define INICIO 0
#define FIM 499

using namespace std;

bool repetido(int busca, int indice, vector<int> tempvet)
{

    bool key = true;

    for (; indice < tempvet.size(); indice++)
    {
        if (tempvet[indice + 1] == busca)
        {
            key = false;
            break;
        }
    }
    return key;
}

int main()
{
    int valor;
    int random;
    int cont = 0;
    vector<int> intvet;

    ofstream randomfile;

    srand(time(NULL));

    randomfile.open("random.txt");

    for (int i = 0; i < QNT_GERADA; i++)
    {
        random = rand() % INTERVALO;
        randomfile << random << endl;
        intvet.push_back(random);
    }

    randomfile.close();

    sort(intvet.begin(), intvet.end());

    for (auto i : intvet)
    {
        cout << i << "     [" << cont + 1 << "]" << endl;
        cont++;
    }

    cout << "Menor valor: " << intvet[INICIO] << endl;
    cout << "Maior valor: " << intvet[FIM] << endl;

    for (int i = 0; i < intvet.size(); i++)
    {
        if (repetido(intvet[i], i, intvet))
        {
            cout << intvet[i] << " surgiu " << count(intvet.begin(), intvet.end(), intvet[i]) << " vezes.\n";
        }
    }

    return 0;
}