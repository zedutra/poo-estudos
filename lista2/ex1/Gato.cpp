/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/
#include <iostream>
#include "Gato.hpp"

using namespace std;

void Gato::setCorPelagem(string cor){
    corPelagem = nome;
};

void Gato::emitirSom(){
    cout << "Miau" << endl;
};

void Gato::mostrarInfo(){
    Animal::mostrarInfo();
    cout << "Cor da pelagem: " << corPelagem << endl;
};

void Gato::ronronar(){
    if (nivelEnergia > 5) {
        nivelEnergia -= 5;
        cout << nome << " esta ronronando: purr purr." << endl;
    } else {
        cout << nome << " esta muito cansado para ronronar." << endl;
    }
}