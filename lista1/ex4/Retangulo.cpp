#include "Retangulo.hpp"
using namespace std;

// Métodos para calcular a área e o perímetro
float Retangulo::calcularArea() {
    return largura * altura;
}

float Retangulo::calcularPerimetro() {
    return 2 * (largura + altura);
}

void Retangulo::grava(float l, float a) {
    largura = l;
    altura = a;
}
