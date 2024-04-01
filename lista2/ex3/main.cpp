/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/
 
#include "PagamentoCartaoOnline.hpp"

using namespace std;

int main (){
    PagamentoCartaoOnline pco(1, 50.0, "21/03/2024", "16:45:00");
    pco.processar();
    pco.mostrarDetalhes();

    return 0;
};