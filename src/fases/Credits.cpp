#include "./Credits.hpp"

void Credits::init() {
  this->objs.push_back(new ObjetoDeJogo("Final Message", TextSprite("Muito obrigado por ter jogado. Espero que tenha se divertido!"), 5, 10));
}

unsigned Credits::run(SpriteBuffer &screen) {
  this->init();
  
  draw(screen);
  system("clear");
  show(screen);
  
  string entrada;
  while (true) {
    getline(cin, entrada);

    if (entrada == "")
      return Fase::END_GAME;

    draw(screen);
    system("clear");
    show(screen);
  }

}