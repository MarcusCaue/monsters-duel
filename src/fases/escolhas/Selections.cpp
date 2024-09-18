#include "./Selections.hpp"
#include "./ChoicePlayers.hpp"
#include <iostream>
using namespace std;

void Selections::init() {
  // Fase de cadastro de jogadores
  Jogador& playerOne = *(this->battleToCharged->getFirstPlayer());
  Jogador& playerTwo = *(this->battleToCharged->getSecondPlayer());
  ChoicePlayers cp = ChoicePlayers("Fase para cadastro de Jogadores", SpriteBuffer(), playerOne, playerTwo);
  
  this->subFases.push_back(&cp);

  cout << "Desapontando..."; 
  cout << "Dado: " << (*(subFases[0])).getName();
}

unsigned Selections::run(SpriteBuffer &screen) {
  this->init();

  // draw(screen);
  // system("clear");
  // show(screen);
  
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

    // cout << "Fase: " << (*(subFases[0])).getName();

    // cout << "Endereço da batalha: " << this->battleToCharged << endl;
    // cout << "Valor de entrada: '" << entrada << "'" << endl;
  }

  return 0;
}