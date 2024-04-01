/*Grupo:
José Vitor #187174 
Lucas Saad #200881
Maria Eduarda de Souza Gomes #260844
Nasser Nasser Fares #196894
Tammy Kojima #213792*/
#include <iostream>
#include <string>
using namespace std;
class Pessoa
{
private:
    string nome;
    int idade;
    float altura;
public:
    void imprime();
    void grava(string n, int i, float a);
};