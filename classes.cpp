#include <iostream>
#include <conio.h>
#include <string>

using namespace std;

class Pessoa {
    protected:
        int id;
        string nome;
        int idade;

    public: 
        Pessoa(int _id, string _nome, int _idade);
        ~Pessoa();
        virtual void show();
        void setNome(string _nome);
        string getNome();
};

Pessoa::Pessoa(int _id, string _nome, int _idade) {
    id = _id;
    nome = _nome;
    idade = _idade;
};

Pessoa::~Pessoa() {
    cout << "Classe Pessoa destruida"<< endl;
};

void Pessoa::show() {
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade <<endl;
    
}

void Pessoa::setNome(string _nome) {
    nome = _nome;
};

string Pessoa::getNome() {
    return nome;
};

class Cliente : public Pessoa {
    private:
        int salario;
    public: 
        Cliente(string _nome, int _idade, int _salario);
        void show();
};

Cliente::Cliente(string _nome, int _idade, int _salario) : Pessoa(1, _nome, _idade) {
    salario = _salario;
}

void Cliente::show() {
    Pessoa::show();
    cout << "Salario: " << salario << endl;

}

int main() {

    Pessoa chefe = Pessoa(1,"Pedro",24);
    Cliente cliente = Cliente("Abrão", 49, 10);

    chefe.show();
    cliente.show();

    return 0;
}



