/*Grupo:
José Vitor #187174 
Lucas Saad #200881
Maria Eduarda de Souza Gomes #260844
Nasser Nasser Fares #196894
Tammy Kojima #213792*/
#ifndef RETANGULO_HPP
#define RETANGULO_HPP

class Retangulo {
private:
    float largura;
    float altura;
public:
    Retangulo(float l, float a); // Construtor
    float calcularArea();
    float calcularPerimetro();
    void grava(float l, float a);
};

#endif
