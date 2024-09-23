#include "./ChoicePlayers.hpp"

void ChoicePlayers::init() {
  Sprite box = Sprite("sprites/box.sp");
  TextSprite title = TextSprite("Insira os Nomes dos Jogadores que irão DUELAR");

  this->objs.push_back(new ObjetoDeJogo("Box", box, 0, 0));
  this->objs.push_back(new ObjetoDeJogo("Box's title", title, 3, 20));
}

unsigned ChoicePlayers::run(SpriteBuffer &screen) {
  this->init();

  draw(screen);
  system("clear");
  show(screen);
  
  string entrada;
  while (true) {
    getline(cin, entrada);

    // if (entrada == "")
    //   return Fase::LEVEL_COMPLETE;
    if (entrada == "q")
      return Fase::END_GAME;

    draw(screen);
    system("clear");
    show(screen);

    cout << "Endereço do primeiro jogador: " << &(this->firstPlayer) << endl;
    cout << "Endereço do segundo jogador: " << &(this->secondPlayer) << endl;
  }
}