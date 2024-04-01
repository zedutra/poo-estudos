/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/

#ifndef PASSARO_HPP
#define PASSARO_HPP

#include "Animal.hpp"
#include <string>
using namespace std;

class Passaro : public Animal {
    private:
        string  corPenas;

    public:
        Passaro(string _nome, int _idade, int _nivelEnergia, string _corPenas)
            : Animal(_nome, _idade, _nivelEnergia),  corPenas(_corPenas) {}

        void setCorPenas(string cor);
        void voar();
        void emitirSom() override;
        void mostrarInfo() override;
};

#endif

