#ifndef JOGADOR
#define JOGADOR

#include "./Monster.hpp"
#include "./Item.hpp"

#include <string>
using namespace std;

class Jogador {
  private:
    string nome;
    Monster monster;
    // Item items[4];

  public:
    Jogador(string nome = "") : nome(nome) {}

    string getNome() const { return this->nome; }
    void setNome(string nome) { this->nome = nome; }

    Monster getMonster() const { return this->monster; }
    void setMonster(Monster& monster) { this->monster = monster; }
};

#endif