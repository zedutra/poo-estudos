/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/
#include <iostream>
#include "Anfibio.hpp"

using namespace std;

void Anfibio :: setTipoPele(string tipo){
    tipoPele = tipo;
}
void Anfibio :: mostrarInfo(){
    cout << "Velocidade Maxima eh " << velocidade << endl;
    cout << "Profundidade Maxima eh " << profundidade << endl;
    cout << "O tipo de pele eh " << tipoPele << endl;
};