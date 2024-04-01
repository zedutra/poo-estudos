#include <iostream>
#include "Cachorro.hpp"
#include "Gato.hpp"
#include "Passaro.hpp"
#include "Peixe.hpp"
using namespace std;

int main (int argc, char* argv[]){
    //Cachorro
    Cachorro c1 = Cachorro("Teddy", 3, 50, "pastor alemao");
    c1.emitirSom();
    c1.brincar();
    c1.mostrarInfo();
    cout << endl;


    //Gato 
    Gato g1 = Gato("Lua", 1, 15, "marrom");
    g1.emitirSom();
    g1.ronronar();
    g1.mostrarInfo();
    cout << endl;

    //Passaro 
    Passaro p1 = Passaro("Mia", 5, 5, "amarelo");
    p1.emitirSom();
    p1.voar();
    p1.mostrarInfo();
    cout << endl;


    //Peixe
    Peixe pe1 = Peixe("X", 0, 0, "X");
    pe1.setNome("Polo");
    pe1.setIdade(2);
    pe1.setNivelEnergia(45);
    pe1.setEspecie("tilapia");
    pe1.emitirSom();
    pe1.nadar();
    pe1.mostrarInfo();
    cout << endl;


    return 0;
};