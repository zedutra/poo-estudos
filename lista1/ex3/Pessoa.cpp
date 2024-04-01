#include <iostream>
#include <string>
#include "Pessoa.hpp"
using namespace std;

void Pessoa::imprime() {
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Altura: " << altura << endl;
};

void Pessoa::grava(string n, int i, float a) {
    nome = n;
    idade = i;
    altura = a;
};