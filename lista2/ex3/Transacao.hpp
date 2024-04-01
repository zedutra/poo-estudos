/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/

#ifndef TRANSACAO_HPP
#define TRANSACAO_HPP

#include <string>

using namespace std;

class Transacao{
    protected:
        int id;
        double valor;
        string data;
        string hora;

    public:
        Transacao(int id, double valor, string data, string hora) : id(id), valor(valor), data(data), hora(hora) {}

        void setTransacao(int id, double valor, string data, string hora);
        virtual void mostrarDetalhes();
        virtual void processar();
};

#endif

