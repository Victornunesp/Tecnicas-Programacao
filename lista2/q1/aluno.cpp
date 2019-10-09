#include "aluno.h"

#define NAME_MIN 3
#define MAT_TAM 11 // Tamanho matrícula válida
#define MED_MIN 0
#define MED_MAX 100 
#define Q_MIN 1 
#define D_MIN 2 // Tamanho do nome da disciplina minimo
#define FALSE 0

using namespace std;

void Aluno::setNome(string s){
    if(s.size() >= NAME_MIN){  
       nome = s; 
    }else
    {
        nome = "Inválido";
    }    
}

string Aluno::getNome(){
    return nome;
}

void Aluno::setMatricula(string m){
    if(m.size() == MAT_TAM){
        matricula = m; 
    }else
    {
        m = "00000000000";
    }
}

string Aluno::getMatricula(){
    return matricula;
}

void Aluno::setMedia(){
    int soma = 0;
    for(int i = 0;i < notas.size();i++){
        soma += notas[i];
        media = soma/notas.size();
    }
}

float Aluno::getMedia(){
    return media;
}

void Aluno::setQntDisciplinas(int q){
    if(q >= Q_MIN){
        qntdisciplinas = q;
    }else
    {
        qntdisciplinas = FALSE;
    }
    
}

int Aluno::getQntDisciplinas(){
    return qntdisciplinas;
}

void Aluno::setDisciplinas(string d){
    if(d.size() > D_MIN){
        disciplinas.push_back(d);
    }else{
        disciplinas.push_back("invalida");
    }
}
string Aluno::getDisciplinas(int i){
    return disciplinas[i];
}

void Aluno::setNotas(int n){
    if(n >= MED_MIN and n <= MED_MAX){
        notas.push_back(n);
    }else{
        notas.push_back(0);
    }
}

int Aluno::getNotas(int i){
    return notas[i];
}

void Aluno::obterDados(){
    string nometemp;
    string mattemp;
    string dtemp;
    int qtemp;
    int ntemp;
    
    cout << "Informe o nome: \n"; 
    cin >> nometemp;
    setNome(nometemp);

    cout << "Informe a matrícula: \n";
    cin >> mattemp;
    setMatricula(mattemp);

    cout << "Digite a quantidade disciplinas: \n";
    cin >> qtemp;
    setQntDisciplinas(qtemp);

    for(int i = 0;i < getQntDisciplinas();i++){
        cout << "Digite a disciplina: \n";
        cin >> dtemp;
        setDisciplinas(dtemp);

        cout << "Digite a nota dessa disciplina: \n";
        cin >> ntemp;
        setNotas(ntemp);
    }
    setMedia();
}

void Aluno::mostrarDados(){
    cout << "Aluno: " << getNome() << " \nMatrícula: " << getMatricula() << endl;

    for(int i = 0;i < qntdisciplinas;i++){
        cout <<"Disciplina: " << getDisciplinas(i) << " | Nota: " << getNotas(i) << endl;
    }
    
    cout << endl << "Media geral: " << getMedia() << endl;

}