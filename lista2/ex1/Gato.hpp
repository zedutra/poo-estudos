/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/

#ifndef GATO_HPP
#define GATO_HPP

#include "Animal.hpp"
#include <string>
using namespace std;

class Gato : public Animal {
    private:
        string corPelagem;

    public:
        Gato(string _nome, int _idade, int _nivelEnergia, string _corPelagem)
            : Animal(_nome, _idade, _nivelEnergia), corPelagem(_corPelagem) {}

        void setCorPelagem(string cor);
        void ronronar();
        void emitirSom() override;
        void mostrarInfo() override;
};

#endif

