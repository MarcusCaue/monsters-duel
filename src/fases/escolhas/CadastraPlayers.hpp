#ifndef CHOICE_PLAYERS
#define CHOICE_PLAYERS

#include "../../ASCII_Engine/Fase.hpp"
#include "../../classes/Jogador.hpp"
#include <string>
using namespace std;

class CadastraPlayers : public Fase {
  public:
    CadastraPlayers(string name, const SpriteBase &bckg, Jogador& p1, Jogador& p2) : Fase(name, bckg),
    firstPlayer(p1), secondPlayer(p2) {}
    virtual ~CadastraPlayers() {}

    virtual void init();
    virtual unsigned run(SpriteBuffer &screen);
  
  private:
    Jogador& firstPlayer;
    Jogador& secondPlayer;
};

#endif