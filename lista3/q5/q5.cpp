#include <iostream>
#include <vector>
#include <algorithm>
#include "arquivo.h"

#define QNT_GERADA 500
#define INTERVALO 1000

using namespace std;

int main()
{
    vector<int> valores;

    criarArquivo();
    setVetor(valores);

    for(int i = 0;i < valores.size();i++)
    {
        if(repetido(valores[i], i, valores))
        {
            cout << valores[i] << " aparece " << count(valores.begin(), valores.end(), valores[i]) << " vezes.\n";
        }
    }
    
    return 0;
}