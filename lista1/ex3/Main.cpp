#include <iostream>
#include "Pessoa.hpp"
using namespace std;

int main() {
    Pessoa umaPessoa;
    Pessoa outraPessoa;

    umaPessoa.grava("Duda", 19, 162);
    outraPessoa.grava("Tammy", 18, 158);

    umaPessoa.imprime();
    outraPessoa.imprime();
    return 0;
}
