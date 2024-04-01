/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/
 
#include <iostream>
#include "PagamentoOnline.hpp"

using namespace std;

void PagamentoOnline::processar() {
    cout << "Processando pagamento online." << endl;
}

void PagamentoOnline::mostrarDetalhes() {
    cout << "Pagamento Online - ID: " << id << ", Valor: " << valor << ", Data: " << data << ", Hora: " << hora << endl;
}