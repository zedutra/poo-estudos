/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/
#ifndef CONTABANCARIA_HPP
#define CONTABANCARIA_HPP

#include <iostream>
#include <string>
using namespace std;

class ContaBancaria{
    private:
        int conta;
        string nome;
        float saldo;

    public:
        void depositar(float deposito);
        void sacar(float saque);
        void exibir();
};

#endif