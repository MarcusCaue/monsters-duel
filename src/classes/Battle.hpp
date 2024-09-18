#ifndef BATTLE
#define BATTLE  

#include "./Jogador.hpp"

class Battle {
  private:
    Jogador* firstPlayer;
    Jogador* secondPlayer;
    int quemEscolhendoNoTurno;
  
  public:
    Battle() : firstPlayer(nullptr), secondPlayer(nullptr), quemEscolhendoNoTurno(-1) {}
    Battle(Jogador& p1, Jogador& p2) {
      this->firstPlayer = &p1;
      this->secondPlayer = &p2;
      quemEscolhendoNoTurno = -1;
    }

    Jogador* getFirstPlayer() const;
    Jogador* getSecondPlayer() const;
    int getIndexPlayerJogando() const;

    void setFirstPlayer(const Jogador& player);
    void setSecondPlayer(const Jogador& player);
    void setIndexPlayerJogando(int index);
};

#endif