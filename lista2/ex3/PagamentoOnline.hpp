/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/

#ifndef PAGAMENTOONLINE_HPP
#define PAGAMENTOONLINE_HPP

#include "Transacao.hpp"
#include <string>

using namespace std;

class PagamentoOnline : public Transacao {
    public:
        PagamentoOnline(int id, double valor, string data, string hora)
            : Transacao(id, valor, data, hora) {}

        void processar() override;
        void mostrarDetalhes() override;
};

#endif

