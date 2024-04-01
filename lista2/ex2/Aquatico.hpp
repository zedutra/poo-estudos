/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/

#ifndef AQUATICO_HPP
#define AQUATICO_HPP

#include <iostream>
#include <string>
using namespace std;

class Aquatico{
    protected:
        int profundidade;
    public:
        Aquatico (int _profundidade) : profundidade(_profundidade) {}
        void setProfundidadeMaxima(int _profundidade);
};

#endif