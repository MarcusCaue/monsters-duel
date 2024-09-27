#ifndef CADASTRA_PLAYERS
#define CADASTRA_PLAYERS

#include "../../ASCII_Engine/Fase.hpp"
#include "../../classes/Jogador.hpp"
#include "../../classes/Battle.hpp"

#include <string>
using namespace std;

class CadastraPlayers : public Fase {
  public:
    CadastraPlayers(string name, const SpriteBase &bckg, Battle& battle) : Fase(name, bckg), battle(battle) {}
    virtual ~CadastraPlayers() {}

    virtual void init();
    virtual unsigned run(SpriteBuffer &screen);
  
  private:
    Battle& battle;
};

#endif