/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/

#ifndef CACHORRO_HPP
#define CACHORRO_HPP

#include "Animal.hpp"
#include <string>
using namespace std;

class Cachorro : public Animal {
    private:
        string raca;

    public:
        Cachorro(string _nome, int _idade, int _nivelEnergia, string _raca)
            : Animal(_nome, _idade, _nivelEnergia), raca(_raca) {}

        void setRaca(string nome);
        void brincar();
        void emitirSom() override;
        void mostrarInfo() override;
};

#endif

