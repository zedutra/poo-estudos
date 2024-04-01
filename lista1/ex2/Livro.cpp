/*Grupo:
José Vitor #187174 
Lucas Saad #200881
Maria Eduarda de Souza Gomes #260844
Nasser Nasser Fares #196894
Tammy Kojima #213792 */
#include <iostream>
#include "Livro.hpp"
using namespace std;

void Livro::imprime(){
    cout << "Título: " << titulo << endl;
    cout << "Autor: " << autor << endl;
    cout << "Editora: " << editora << endl;
    cout << "Ano: " << ano << endl;
};

void Livro::grava(string t, string a, string e, string y) {
    titulo = t;
    autor = a;
    editora = e;
    ano = y;
};