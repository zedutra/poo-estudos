#include <iostream>
#include "Retangulo.hpp"
using namespace std;

int main() {
    Retangulo retangulo(5.0, 2.0);

    float area = retangulo.calcularArea();
    cout << "A area do retangulo eh: " << area << endl;

    float perimetro = retangulo.calcularPerimetro();
    cout << "O perimetro do retangulo eh: " << perimetro << endl;

    return 0;
}
