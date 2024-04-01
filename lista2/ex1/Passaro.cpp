/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/
#include <iostream>
#include "Passaro.hpp"

using namespace std;

void Passaro:: setCorPenas(string cor){
    corPenas = cor;
};

void Passaro::emitirSom(){
    cout << "Piu piu" << endl;
};

void Passaro::mostrarInfo(){
    Animal::mostrarInfo();
    cout << "Cor das penas: " << corPenas << endl;
};

void Passaro::voar(){
    if (nivelEnergia > 15) {
        nivelEnergia -= 15;
        cout << nome << " esta voando alto!" << endl;
    } else {
        cout << nome << " esta muito cansado para voar." << endl;
    }
}