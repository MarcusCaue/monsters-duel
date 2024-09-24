#include "./Selections.hpp"
#include "./CadastraPlayers.hpp"
#include "./ChoiceMonsters.hpp"
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

  // 2º Fase: Escolha dos Monstros dos Jogadores
  Sprite bckg = Sprite("sprites/bckgChoiceMonsters/choiceMonsters.sp");
  ChoiceMonsters* cm = new ChoiceMonsters("Fase em que os jogadores escolhem seus monstros", bckg, playerOne, playerTwo);
  
  this->subFases.push_back(cp);
  this->subFases.push_back(cm);
}

unsigned Selections::run(SpriteBuffer &screen) {
  this->init();

  draw(screen);
  system("clear");
  show(screen);
  
  string entrada;
  int resp;

  resp = this->subFases[1]->run(screen);
    if (resp == Fase::END_GAME) 
      return Fase::END_GAME;

  // for (Fase* f : subFases) {
  //   resp = f->run(screen);
  //   if (resp == Fase::END_GAME) 
  //     return Fase::END_GAME;
  // }

  draw(screen);
  system("clear");
  show(screen);
  
  getline(cin, entrada);

  if (entrada == "q")
    return Fase::END_GAME;
  
  return 0;
}