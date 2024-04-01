/** 
 * Grupo:
 *     José Vitor #187174 
 *     Lucas Saad Pascholini #200881
 *     Maria Eduarda de Souza Gomes #260844
 *     Nasser Nasser Fares #196894
 *     Tammy Kojima #213792
 * **/
#include <iostream>
#include "Cachorro.hpp"

using namespace std;

void Cachorro::setRaca(string nome){
    raca = nome;
};

void Cachorro::emitirSom(){
    cout << "Au Au" << endl;
};

void Cachorro::mostrarInfo(){
    Animal::mostrarInfo();
    cout << "Raca: " << raca << endl;
};

void Cachorro::brincar(){
    if (nivelEnergia > 10) {
        nivelEnergia -= 10;
        cout << nome << " esta brincando!" << endl;
    } else {
        cout << nome << " esta muito cansado para brincar." << endl;
    }
}