#ifndef MAIN_MENU
#define MAIN_MENU

#include "../ASCII_Engine/Fase.hpp"
#include <string>
using std::string;

class MainMenu : public Fase {
  public:
    MainMenu(string name, const SpriteBuffer &bkg) : Fase(name, bkg) {}
    virtual ~MainMenu() {}

    virtual void init();
    virtual unsigned run(SpriteBuffer &screen);

  private:
    ObjetoDeJogo* gameTitle;
  
};

#endif