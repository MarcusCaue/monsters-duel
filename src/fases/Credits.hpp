#ifndef CREDITS
#define CREDITS

#include "../ASCII_Engine/Fase.hpp"
#include <string>
using namespace std;

class Credits : public Fase {
  public:
    Credits(string name, const SpriteBuffer &bckg) : Fase(name, bckg) {}
    virtual ~Credits() {}

    virtual void init();
    virtual unsigned run(SpriteBuffer &screen);
};

#endif