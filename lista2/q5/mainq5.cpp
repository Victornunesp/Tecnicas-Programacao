#include "fatura.h"
#define INICIAL 0

using namespace std;

int main(){

    string numSerie;
    string descricao;
    int quantidade = INICIAL;
    float valor = INICIAL;

    cout << "Informe o número de série do item: " << endl;
    cin >> numSerie;

    cout << "Descreva o item: " << endl;
    cin.ignore();
    getline(cin, descricao);

    cout << "Informe o número de itens: " << endl;
    cin >> quantidade;

    cout << "Informe o valor do item (R$): " << endl;
    cin >> valor;

    Fatura fatura(numSerie, descricao, quantidade, valor);

    fatura.mostrarFatura();

    system("pause");
    
    return 0;
}