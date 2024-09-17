#include "./MainMenu.hpp"
#include <iostream>
using namespace std;

void MainMenu::init() {
  this->gameTitle = new ObjetoDeJogo("Nome do Jogo", Sprite("sprites/main-title/main-title.sp"), 0, 0);
  this->objs.push_back(gameTitle);

  this->objs.push_back(new ObjetoDeJogo("Press Enter to Start", TextSprite("Pressione ENTER para começar o jogo!"), 6, 12));
}

unsigned MainMenu::run(SpriteBuffer &screen) {

  this->init();

  draw(screen);
  system("clear");
  show(screen);
  
  string entrada;
  while (true) {
    getline(cin, entrada);

    if (entrada == "")
      return Fase::LEVEL_COMPLETE;
    else if (entrada == "q")
      return Fase::END_GAME;

    draw(screen);
    system("clear");
    show(screen);
    // cout << "Valor de entrada: '" << entrada << "'" << endl;
  }

  return 0;
}