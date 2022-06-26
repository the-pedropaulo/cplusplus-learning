#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Pessoa {
    private:
        int id;
        string nome;
        int idade;

    public: 
        Pessoa(int _id, string _nome, int _idade);
        void setNome(string _nome);
        string getNome();
};

Pessoa::Pessoa(int _id, string _nome, int _idade) {
    id = _id;
    nome = _nome;
    idade = _idade;
};

void Pessoa::setNome(string _nome) {
    nome = _nome;
};

string Pessoa::getNome() {
    return nome;
};


int main() {

    Pessoa chefe = Pessoa(1,"Pedro",24);
    Pessoa funcionario = Pessoa(2, "José", 18);

    cout << "Nome do chefe: " << chefe.getNome() << endl;
    cout << "Nome do funcionario: " << funcionario.getNome() << endl;

    return 0;
}



