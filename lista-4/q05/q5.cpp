#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main()
{
    map<string, vector<string>> evento;
    map<string, vector<string>>::iterator it;
    string dados;
    char cont;

    do
    {
        cout << "Informe o local do evento: ";
        getline(cin, dados);
        evento["Local"].push_back(dados);

        cout << "Agora, o responsável pelo evento: ";
        getline(cin, dados);
        evento["Responsável"].push_back(dados);

        cout << "Por fim, a prioridade do evento: ";
        getline(cin, dados);
        evento["Prioridade"].push_back(dados);

        cout << "Deseja continuar? [s/n]" << endl;
        cin >> cont;

        cin.ignore();
        cout << endl;
    }while(cont != 'n');

    for(it = evento.begin();it != evento.end();it++)
    {
        cout << it->first << ":\n";
        for(auto e : it->second)
        {
            cout << e << endl;
        }

        cout << endl;
    }

    return 0;
}