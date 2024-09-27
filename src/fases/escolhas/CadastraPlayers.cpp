#include "./CadastraPlayers.hpp"

void CadastraPlayers::init() {
  Sprite box = Sprite("sprites/box.sp");
  TextSprite title = TextSprite("Insira os Nomes dos Jogadores que irão DUELAR");

  this->objs.push_back(new ObjetoDeJogo("Box", box, 0, 0));
  this->objs.push_back(new ObjetoDeJogo("Box's title", title, 3, 20));
}

unsigned CadastraPlayers::run(SpriteBuffer &screen) {
  this->init();

  draw(screen);
  system("clear");
  show(screen);

  string entrada, nomeP1, nomeP2;
  getline(cin, entrada);

  if (entrada == "q")
    return Fase::END_GAME;

  cout << "Digite o nome do primeiro jogador: ";
  getline(cin, nomeP1);
  this->battle.setFirstPlayer(Jogador(nomeP1));

  cout << "Digite o nome do segundo jogador: ";
  getline(cin, nomeP2);
  this->battle.setSecondPlayer(Jogador(nomeP2));

  if (nomeP1 != "" && nomeP2 != "") {
    cout << "Jogadores cadastrados com sucesso!!!" << endl;
    return Fase::LEVEL_COMPLETE;
  } 
  
}