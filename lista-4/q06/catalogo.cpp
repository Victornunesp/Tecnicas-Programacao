#include "catalogo.h"

void add_dados(string n, map<string, string> c)
{
    char cont;

    do 
    {
        cin.ignore();

        cout << "Informe o nome da pessoa: ";
        getline(cin, n);
        cin.ignore();

        cout << "Agora, seu email: ";
        getline(cin, c[n]);

        cout << "\nDeseja continuar? [s/n]\n";
        cin >> cont;

        cin.ignore();
        cout << endl;
    }while(cont != 'n');
}

void rm_dados(string n, map<string, string> c)
{
    char cont;

    do 
    {
        cout << "Digite o nome do contato que você deseja deletar: ";
        cin >> n;

        if(c.find(n) != c.end())
        {
            c.erase(n);
            cout << "Contato removido com sucesso!\n";
        }
        else
        {
            cout << "O contato procurado não existe.\n";
        }

        cout << "Deseja continuar? [s/n]\n";
        cin >> cont;

        cin.ignore();
    }while(cont != 'n');
}

void mudar_dados(string n, map<string, string> c)
{
    string novo;
    char cont;

    do 
    {
        cout << "Digite o nome do contato que você deseja alterar: ";
        cin >> n;

        if(c.find(n) != c.end())
        {
            c[novo] = c[n];
            c.erase(n);
            cout << "Contato alterado com sucesso!\n";
        }
        else
        {
            cout << "O contato procurado não existe.\n";
        }

        cout << "Deseja continuar? [s/n]\n";
        cin >> cont;

        cin.ignore();
    }while(cont != 'n');
}

void mostrar_dados(map<string, string> c)
{
    for(auto elemento : c)
    {
        cout << "\nNome: " << elemento.first;
        cout << "Email: " << elemento.second;
    }
}

void operacoes(string n, map<string, string> c)
{
    int op;
    char cont;

    do 
    {
        opcoes();
        cin >> op;

        switch(op)
        {
            case 1:
                add_dados(n, c);
                break;
            case 2:
                rm_dados(n, c);
                break;
            case 3:
                mudar_dados(n, c);
                break;
            case 4:
                mostrar_dados(c);
                break;
            case 5:
                break;
            default:
                cout << "Operação inválida.\n";
                break;
        }

        cout << "Deseja realizar mais outra operação? [s/n]\n";
        cin >> cont;

        cin.ignore();   
    }while(cont != 'n');
}

void opcoes()
{
    cout << "Que operação você deseja realizar?\n";
    cout << "1.Adicionar contato\n";
    cout << "2.Remover contato\n";
    cout << "3.Mudar contato\n";
    cout << "4.Mostrar lista\n";
    cout << "5.Encerrar sessão\n";
}