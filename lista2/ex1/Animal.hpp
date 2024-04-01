/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/

#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>
#include <string>
using namespace std;

class Animal{
    protected:
        string nome;
        int idade;
        int nivelEnergia;

    public:
        Animal(string _nome, int _idade, int _nivelEnergia) : nome(_nome), idade(_idade), nivelEnergia(_nivelEnergia) {}

        void setNome(string _nome);
        void setIdade(int _idade);
        void setNivelEnergia(int _energia);
        virtual void emitirSom();
        virtual void mostrarInfo();
        void dormir(int _energia);
};

#endif

