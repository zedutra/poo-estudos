/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/
#include <iostream>
#include "ContaBancaria.hpp"

using namespace std;

void ContaBancaria::depositar(float deposito)
{
    saldo += deposito;
};

void ContaBancaria::sacar(float saque)
{
    saldo -= saque;
};

void ContaBancaria::exibir()
{
    cout << "Seu saldo eh: " << saldo << endl;
};