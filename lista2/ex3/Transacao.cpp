/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/
 
#include <iostream>
#include "Transacao.hpp"

using namespace std;

void Transacao::setTransacao(int id, double valor, string data, string hora) {
    this->id = id;
    this->valor = valor;
    this->data = data;
    this->hora = hora;
}

void Transacao::processar() {}

void Transacao::mostrarDetalhes() {
    cout << "Transacao - ID: " << id << ", Valor: " << valor << ", Data: " << data << ", Hora: " << hora << endl;
}