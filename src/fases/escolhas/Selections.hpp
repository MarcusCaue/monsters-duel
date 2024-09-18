#ifndef SELECTIONS
#define SELECTIONS

#include "../../ASCII_Engine/Fase.hpp"
#include "../../classes/Battle.hpp"
#include "./ChoicePlayers.hpp"

#include <string>
using namespace std;

class Selections : public Fase {
  public:
    Selections(string name, const SpriteBuffer &bckg, Battle& battle) : Fase(name, bckg), battleToCharged(&battle) {}
    virtual ~Selections() {}

    virtual void init();
    virtual unsigned run(SpriteBuffer &screen);
  
  private:
    Battle* battleToCharged;
    ChoicePlayers* cp;
    vector<Fase*> subFases;
};

#endif