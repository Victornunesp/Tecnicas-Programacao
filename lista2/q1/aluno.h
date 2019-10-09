#ifndef ALUNO_H
#define ALUNO_H
#include <iostream>
#include <vector>

using namespace std;

class Aluno{
    private:
        string nome;
        string matricula;
        vector <string> disciplinas;
        vector <int> notas;
        float media;
        int qntdisciplinas;
    
    public:
        void setNome(string n);
        string getNome();

        void setMatricula(string m);
        string getMatricula();
        
        void setQntDisciplinas(int q);
        int getQntDisciplinas();

        void setDisciplinas(string d);
        string getDisciplinas(int i);

        void setNotas(int n);
        int getNotas(int i);

        void setMedia();
        float getMedia();

        void obterDados();
        void mostrarDados();
};
#endif
