#ifndef JOGADOR
#define JOGADOR

#include "./Monster.hpp"

#include <string>
using namespace std;

class Jogador {
  private:
    string nome;
    Monster monster;

  public:
    Jogador(string nome = "") : nome(nome) {}

    string getNome() const { return this->nome; }
    void setNome(string nome) { this->nome = nome; }

    Monster getMonster() const { return this->monster; }
    void setMonster(Monster& monster) { this->monster = monster; }
};

#endif