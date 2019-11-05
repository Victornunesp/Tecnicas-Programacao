#include <iostream>
#include <map>

using namespace std;

int main()
{
    string nome;
    string tel;
    map<string,string> telefone;
    
    do
    {
        cout << "Informe um nome: " << endl;
        cin >> nome;
        if(nome == "sair") break;
        telefone[nome];
        
        cout << "Informe um numero: " << endl;
        cin >> tel;
        if(tel == "0") break;
        telefone[nome] = tel;

        for(auto n : telefone)
        {
            if(telefone.find(nome) != telefone.end())
                cout << "\n" << n.first << endl << "Telefone: " << n.second << "\n" << endl;     
        }

    }while(true);
    

    return 0;
}