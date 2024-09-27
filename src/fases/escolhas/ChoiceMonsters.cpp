#include "./ChoiceMonsters.hpp"

void ChoiceMonsters::init() {
  TextSprite title = TextSprite("ESCOLHA O SEU MONSTRO PARA O DUELO");

  ObjetoDeJogo* texugo = new ObjetoDeJogo(
    "texugo", TextSprite("VOCÊ ESTÁ SELECIONANDO O 'TEXUGO FIEL'"), 24, 20
  );
  ObjetoDeJogo* texugoSprite = new ObjetoDeJogo("Sprite do Monstro", Sprite("sprites/monsters/texugo/texugo.sp"), 9, 0);

  ObjetoDeJogo* leao = new ObjetoDeJogo(
    "leao", TextSprite("VOCÊ ESTÁ SELECIONANDO O 'LEÃO BRAVO'"), 24, 20
  );
  ObjetoDeJogo* leaoSprite = new ObjetoDeJogo("Sprite do Monstro", Sprite("sprites/monsters/leao/leao.sp"), 9, 53);

  ObjetoDeJogo* serp = new ObjetoDeJogo(
    "serp", TextSprite("VOCÊ ESTÁ SELECIONANDO A 'SERPENTE ASTUTA'"), 24, 20
  );
  ObjetoDeJogo* serpSprite = new ObjetoDeJogo("Sprite do Monstro", Sprite("sprites/monsters/serpente/serpente.sp"), 9, 128);

  ObjetoDeJogo* corvo = new ObjetoDeJogo(
    "corvo", TextSprite("VOCÊ ESTÁ SELECIONANDO O 'CORVO INTELIGENTE'"), 24, 20
  );
  ObjetoDeJogo* corvoSprite = new ObjetoDeJogo("Sprite do Monstro", Sprite("sprites/monsters/corvo/corvo.sp"), 9, 162);

  leao->desativarObj();
  serp->desativarObj();
  corvo->desativarObj();

  this->objs.push_back(new ObjetoDeJogo("Box's title", title, 3, 20));
  this->objs.push_back(texugo);
  this->objs.push_back(texugoSprite);
  this->objs.push_back(leao);
  this->objs.push_back(leaoSprite);
  this->objs.push_back(serp);
  this->objs.push_back(serpSprite);
  this->objs.push_back(corvo);
  this->objs.push_back(corvoSprite);

}

unsigned ChoiceMonsters::run(SpriteBuffer &screen) {
  this->init();

  draw(screen);
  system("clear");
  show(screen);

  string entrada;
  while (true) {
    getline(cin, entrada);

    if (entrada == "q")
      return Fase::END_GAME;
    
    draw(screen);
    system("clear");
    show(screen);
  }
}