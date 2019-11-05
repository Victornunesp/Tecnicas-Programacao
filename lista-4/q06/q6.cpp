#include <iostream>
#include <map>
#include "catalogo.h"

using namespace std;

int main()
{
    map<string, string> catalogo;
    string nome = "\0";

    operacoes(nome, catalogo);

    return 0;
}