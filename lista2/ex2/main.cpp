#include <iostream>
#include "Anfibio.hpp"
using namespace std;

int main (int argc, char* argv[]){
    Anfibio a1 = Anfibio(20,10,"Rugosa");
    a1.mostrarInfo();
    cout << endl;
    return 0;
};