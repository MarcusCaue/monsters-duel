#ifndef CHOICE_MONSTERS
#define CHOICE_MONSTERS

#include "../../ASCII_Engine/Fase.hpp"
#include "../../classes/Battle.hpp"

#include <string>
using namespace std;

class ChoiceMonsters : public Fase {
  public:
    ChoiceMonsters(string name, const SpriteBase &bckg, Battle& battle) : Fase(name, bckg), battle(battle) {}
    virtual ~ChoiceMonsters() {}

    virtual void init();
    virtual unsigned run(SpriteBuffer &screen);
  
  private:
    Battle& battle;
};

#endif