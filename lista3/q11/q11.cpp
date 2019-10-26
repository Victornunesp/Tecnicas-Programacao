#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>

using namespace std;

int main()
{
    ifstream arquivo;
    
    vector<string> conteudo;
    vector<string>::iterator it;
    
    string key;
    string linha;
    int cont;

    cout << "Insira o valor à buscar: ";
    cin >> key;

    arquivo.open("q9.txt");

    while (arquivo >> linha)
    {
        conteudo.push_back(linha);
    }

    it = find(conteudo.begin(), conteudo.end(), key);
    cont = count(conteudo.begin(), conteudo.end(), key);

    if (it != conteudo.end())
    {
        cout << *it << " surgiu " << cont << " vezes." <<  endl;
    }
    else
    {
        cout << *it << " não pertece ao arquivo." << endl;
    }

    arquivo.close();

    return 0;
}