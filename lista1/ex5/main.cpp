#include <iostream>
#include "Circulo.hpp"
using namespace std;

int main()
{
    Circulo circulo;
    int raio;

    std::cout << "Digite o raio do circulo: ";
    std::cin >> raio;
    circulo.grava(raio);


    std::cout << "Area: " << circulo.calcularArea() << std::endl;
    std::cout << "Circunferencia: " << circulo.calcularCircunferencia() << std::endl;
    return 0;
};