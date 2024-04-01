/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/

#ifndef PAGAMENTOCARTAOONLINE_HPP
#define PAGAMENTOCARTAOONLINE_HPP

#include "Transacao.hpp"
#include "PagamentoOnline.hpp"
#include "PagamentoCartao.hpp"
#include <string>

using namespace std;

class PagamentoCartaoOnline : public PagamentoOnline, public PagamentoCartao {
    public:
        PagamentoCartaoOnline(int id, double valor, string data, string hora) 
            : PagamentoOnline(id, valor, data, hora), PagamentoCartao(id, valor, data, hora) {}

        void processar() override;
        void mostrarDetalhes() override;
};

#endif

