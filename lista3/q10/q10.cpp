#include <iostream>
#include <fstream>
#define QNT_LINHAS 11 

using namespace std;

int main()
{
    ifstream arquivoq10;
    string linha;

    arquivoq10.open("q9.txt");

    for(int i = 0;i< QNT_LINHAS;i++)
    {
        getline(arquivoq10, linha);
        cout << linha << endl;
    }

    arquivoq10.close();

    return 0;
}