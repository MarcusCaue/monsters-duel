#include "./Selections.hpp"
#include "./CadastraPlayers.hpp"
#include <iostream>
using namespace std;

Selections::~Selections() {
  for (int i = 0; i < this->subFases.size(); i++)
    delete subFases[i];
}

void Selections::init() {
  // 1º Fase: Cadastro de Jogadores
  Jogador& playerOne = this->battleToCharged.getFirstPlayer();
  Jogador& playerTwo = this->battleToCharged.getSecondPlayer();
  CadastraPlayers* cp = new CadastraPlayers("Fase para cadastro de Jogadores", SpriteBuffer(1, 1), playerOne, playerTwo);
  
  this->subFases.push_back(cp);
}

unsigned Selections::run(SpriteBuffer &screen) {
  this->init();

  draw(screen);
  system("clear");
  show(screen);
  
  string entrada;
  int resp;

  for (Fase* f : subFases) {
    resp = f->run(screen);
    if (resp == Fase::END_GAME) 
      return Fase::END_GAME;
  }

  draw(screen);
  system("clear");
  show(screen);
  
  getline(cin, entrada);

  if (entrada == "q")
    return Fase::END_GAME;
  
  return 0;
}