#ifndef BATTLE
#define BATTLE  

#include "./Jogador.hpp"

class Battle {
  private:
    Jogador& firstPlayer;
    Jogador& secondPlayer;
    int quemEscolhendoNoTurno;
  
  public:
    Battle(Jogador& p1, Jogador& p2) : firstPlayer(p1), secondPlayer(p2), quemEscolhendoNoTurno(-1) {}

    Jogador& getFirstPlayer() const;
    Jogador& getSecondPlayer() const;
    int getIndexPlayerJogando() const;

    void setFirstPlayer(const Jogador& player);
    void setSecondPlayer(const Jogador& player);
    void setIndexPlayerJogando(int index);
};

#endif