#include <iostream>

using namespace std;

class Livro
 {
 private:
 string titulo;
 string autor;
 string editora;
 string ano;
 public:
 void imprime();
 void grava(string t, string a, string e, string y);
 };