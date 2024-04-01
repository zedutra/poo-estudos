/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/
 
#include <iostream>
#include "PagamentoCartaoOnline.hpp"

using namespace std;

void PagamentoCartaoOnline::processar() {
    cout << "Processando pagamento com cartao online." << endl;
}

void PagamentoCartaoOnline::mostrarDetalhes() {
    cout << "Pagamento com cartao online - ID: " << PagamentoOnline::id << ", Valor: " << PagamentoOnline::valor << ", Data: " << PagamentoOnline::data << ", Hora: " << PagamentoOnline::hora << endl;
}