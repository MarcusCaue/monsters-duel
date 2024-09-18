#ifndef GAME
#define GAME

#include "./fases/MainMenu.hpp"
#include "./fases/Credits.hpp"
#include "./fases/escolhas/Selections.hpp"

#include <iostream>
using std::cout, std::cin, std::endl;

// Tela de "seleção de monstro"
void selectMonster() {
	SpriteBuffer tela = SpriteBuffer(200, 30);

	Sprite luff = Sprite("./sprites/monsters/texugo/texugo.sp");
	Sprite leao = Sprite("./sprites/monsters/leao/leao-in-battle.sp");
	Sprite corvo = Sprite("./sprites/monsters/corvo/corvo-in-battle.sp");
	Sprite serpente = Sprite("./sprites/monsters/serpente/serpente-in-battle.sp");

	string str;

	while (true) {
		getline(cin, str);

		luff.update();
		leao.update();

		// draw(linha, coluna)
		luff.draw(tela, 0, 0);
		leao.draw(tela, 0, 50);
		serpente.draw(tela, 0, 100);
		corvo.draw(tela, 0, 150);

		system("clear");
		cout << tela << endl;
	}
}

// Seta de seleção
void seta() {
	SpriteBuffer tela = SpriteBuffer(100, 10);
	
	string str;
	
	ObjetoDeJogo hab = ObjetoDeJogo("Habilidades", TextSprite("HABILIDADES"), 0, 10);
	ObjetoDeJogo itens = ObjetoDeJogo("Itens", TextSprite("ITEMS"), 1, 10);
	ObjetoDeJogo habSp = ObjetoDeJogo("Especial", TextSprite("ESPECIAL"), 2, 10);
	ObjetoDeJogo sleep = ObjetoDeJogo("Descansar", TextSprite("DESCANSAR"), 3, 10);
	
	ObjetoDeJogo seta = ObjetoDeJogo("Seta de seleção", TextSprite("->"), 0, 5);
	
	while (true) {
		getline(cin, str);
	
		if (str == "s") {
			seta.moveDown();
		} else if (str == "w") {
			seta.moveUp();
		}
	
		seta.update();
		tela.clear();
	
		itens.draw(tela, itens.getPosL(), itens.getPosC());
		hab.draw(tela, hab.getPosL(), hab.getPosC());
		habSp.draw(tela, habSp.getPosL(), habSp.getPosC());
		sleep.draw(tela, sleep.getPosL(), sleep.getPosC());
	
		seta.draw(tela, seta.getPosL(), seta.getPosC());
	
		system("clear");
		cout << tela << endl;
		cout << "Posição da seta: " << seta.getPosL() << "x" << seta.getPosC() << endl;
	
	}
}

class Game {
  public:

    static void run() {
      SpriteBuffer tela = SpriteBuffer(200, 10);

			Jogador playerOne, playerTwo;
			Battle battle = Battle(playerOne, playerTwo);

			unsigned resp = -1;

      MainMenu mainMenu = MainMenu("Tela inicial", tela);
      Credits credits = Credits("Tela de despedida", tela);
			Selections selections = Selections("Fase Geral para cadastrar os dados do Duelo", tela, battle);
			
			resp = mainMenu.run(tela);
			tela.clear();
			if (resp == Fase::END_GAME)
					credits.run(tela);
			else {
				resp = selections.run(tela);
				tela.clear();
				if (resp == Fase::END_GAME)
					credits.run(tela);
			}
    }

};

#endif