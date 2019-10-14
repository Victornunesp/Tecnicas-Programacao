#include <iostream>
#include <vector>


int main(){
    int valor;
    vector <int> ivet;

    cout << "Digite um inteiro: " << endl;

    while(cin >> valor){
        ivet.push_back(valor);
    }

    for(auto i : ivet){
        cout << i << " ";
    }

    return 0;
}