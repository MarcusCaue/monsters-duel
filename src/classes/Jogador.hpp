#ifndef JOGADOR
#define JOGADOR

#include "./Monster.hpp"
#include "./Item.hpp"

#include <string>
#include <vector>
using namespace std;

class Jogador {
  private:
    string nome;
    // Monster monstro;
    // Item items[4];

  public:
    Jogador(string nome = "") : nome(nome) {}

    string const getNome() { return this->nome; }
    void setNome(string nome) { this->nome = nome; }
};

#endif