#include "./Selections.hpp"
#include "./ChoicePlayers.hpp"
#include <iostream>
using namespace std;

Selections::~Selections() {
  for (int i = 0; i < this->subFases.size(); i++)
    delete subFases[i];
}

void Selections::init() {
  // 1º Fase: Cadastro de Jogadores
  Jogador playerOne = this->battleToCharged.getFirstPlayer();
  Jogador playerTwo = this->battleToCharged.getSecondPlayer();
  ChoicePlayers* cp = new ChoicePlayers("Fase para cadastro de Jogadores", SpriteBuffer(1, 1), playerOne, playerTwo);
  
  this->subFases.push_back(cp);
}

unsigned Selections::run(SpriteBuffer &screen) {
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

    cout << "Primeira Fase: " << this->subFases[0]->getName() << endl;

    // cout << "Endereço da batalha: " << this->battleToCharged << endl;
    // cout << "Valor de entrada: '" << entrada << "'" << endl;
  }

  return 0;
}