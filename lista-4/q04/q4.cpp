#include <iostream>
#include <map>
#include <vector>

using namespace std;

int main()
{
    map <string,string> event;
    char cont;
    do
    {
        cout << "Informe um local: " << endl;
        getline(cin, event["Local"]);        
        
        cout << "Informe a prioridade: " << endl;
        getline(cin, event["Prioridade"]);

        cout << "Informe um resposável: " << endl;
        getline(cin, event["Responsável"]);
        
        for(auto element : event)
        {
            cout << element.first << " : " << element.second << endl;
        }
        
        cout << "Continuar? [s / n]: " << endl;
        cin >> cont;

    }while(cont == 's');

    return 0;
}