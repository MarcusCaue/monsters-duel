#ifndef CHOICE_MONSTERS
#define CHOICE_MONSTERS

#include "../../ASCII_Engine/Fase.hpp"
#include "../../classes/Jogador.hpp"
#include <string>
using namespace std;

class ChoiceMonsters : public Fase {
  public:
    ChoiceMonsters(string name, const SpriteBase &bckg, Jogador& p1, Jogador& p2) : Fase(name, bckg),
    firstPlayer(p1), secondPlayer(p2) {}
    virtual ~ChoiceMonsters() {}

    virtual void init();
    virtual unsigned run(SpriteBuffer &screen);
  
  private:
    Jogador& firstPlayer;
    Jogador& secondPlayer;
};

#endif