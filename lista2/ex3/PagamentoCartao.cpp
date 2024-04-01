/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/
 
#include <iostream>
#include "PagamentoCartao.hpp"

using namespace std;

void PagamentoCartao::processar() {
    cout << "Processando Pagamento com cartao." << endl;
}

void PagamentoCartao::mostrarDetalhes() {
    cout << "Pagamento com cartao - ID: " << id << ", Valor: " << valor << ", Data: " << data << ", Hora: " << hora << endl;
}