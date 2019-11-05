#include <iostream>
#include <map>

using namespace std;

int main()
{   
    int n;
    map<int, int> valores;

    cout << "Informe o valor de n: ";
    cin >> n;

    for(int i = 0;i <= n;i++){
        valores[i] = i * i;
    }

    for(auto elem : valores){
        cout << elem.first << " : " << elem.second << endl;
    }

    return 0;
}