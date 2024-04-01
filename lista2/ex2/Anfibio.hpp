/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/

#ifndef ANFIBIO_HPP
#define ANFIBIO_HPP

#include "Terrestre.hpp"
#include "Aquatico.hpp"
#include <string>
using namespace std;

class Anfibio : public Terrestre , public Aquatico {
    protected:
        string tipoPele;
    public:
        Anfibio(int _velocidade,int _profundidade,string _tipoPele) : Terrestre(_velocidade) , Aquatico(_profundidade), tipoPele(_tipoPele) {}
        void setTipoPele(string tipo);
        void mostrarInfo();
};
#endif