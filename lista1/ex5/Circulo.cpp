#include <cmath>
#include "Circulo.hpp"

const double PI = 3.14159;

void Circulo::grava(float r){
    raio = r;
};

double Circulo::calcularArea(){
    return PI * pow(raio, 2);
};

double Circulo::calcularCircunferencia(){
    return 2 * PI * raio;
};