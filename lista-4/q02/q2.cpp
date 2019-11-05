#include <iostream>
#include <map>

using namespace std;

int main()
{
    string palavra;
    map<char, int> contador;

    cout << "Informe uma palavra: ";
    getline(cin, palavra);

    for(auto letra : palavra)
    {
        if(letra != ' ')
            contador[letra]++;
    }

    for(auto e : contador)
    {
        cout << e.first << " aparece " << e.second << " vezes;\n";
    }

    return 0;
}