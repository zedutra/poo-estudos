/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/

#ifndef PEIXE_HPP
#define PEIXE_HPP

#include "Animal.hpp"
#include <string>
using namespace std;

class Peixe : public Animal {
    private:
        string  especie;

    public:
        Peixe(string _nome, int _idade, int _nivelEnergia, string _especie)
            : Animal(_nome, _idade, _nivelEnergia),  especie(_especie) {}

        void setEspecie(string nome);
        void nadar();
        void emitirSom() override;
        void mostrarInfo() override;
};

#endif

