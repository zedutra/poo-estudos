/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/
#include <iostream>
#include "Animal.hpp"

using namespace std;

void Animal::setNome(string _nome){
    nome = _nome;
};

void Animal::setIdade(int _idade){
    idade = _idade;
};

void Animal::setNivelEnergia(int _energia){
    nivelEnergia = _energia;
};

void Animal::emitirSom(){
    cout << "Som genérico do animal" << endl;
};

void Animal::mostrarInfo(){
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
    cout << "Nivel de Energia: " << nivelEnergia << endl;
};

void Animal::dormir(int energia){
    int soma = nivelEnergia + energia;
    if (soma <= 100)
    {
        nivelEnergia = soma;
    }
    
};