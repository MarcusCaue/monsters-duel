#ifndef CHOICE_PLAYERS
#define CHOICE_PLAYERS

#include "../../ASCII_Engine/Fase.hpp"
#include "../../classes/Jogador.hpp"
#include <string>
using namespace std;

class ChoicePlayers : public Fase {
  public:
    ChoicePlayers(string name, const SpriteBase &bckg, Jogador& p1, Jogador& p2) : Fase(name, bckg) {
      this->firstPlayer = &p1;
      this->secondPlayer = &p2;
    }
    virtual ~ChoicePlayers() {}

    virtual void init();
    virtual unsigned run(SpriteBuffer &screen);
  
  private:
    Jogador* firstPlayer;
    Jogador* secondPlayer;
};

#endif