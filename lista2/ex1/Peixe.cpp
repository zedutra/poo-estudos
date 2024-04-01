/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/
#include <iostream>
#include "Peixe.hpp"

using namespace std;

void Peixe:: setEspecie(string nome){
    especie = nome;
};

void Peixe::emitirSom(){
    cout << "Glub glub" << endl;
};

void Peixe::mostrarInfo(){
    Animal::mostrarInfo();
    cout << "Espécie: " << especie << endl;
};

void Peixe::nadar(){
    if (nivelEnergia > 5) {
        nivelEnergia -= 5;
        cout << nome << " esta nadando!" << endl;
    } else {
        cout << nome << " esta muito cansado para nadar." << endl;
    }
}