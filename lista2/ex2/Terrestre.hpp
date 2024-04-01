/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/

#ifndef TERRESTRE_HPP
#define TERRESTRE_HPP

#include <iostream>
using namespace std;

class Terrestre{
    protected:
        int velocidade;
    public:
        Terrestre (int _velocidade) : velocidade(_velocidade) {}
        void setVelocidadeMaxima(int _velocidade);
};

#endif