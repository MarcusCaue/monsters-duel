#ifndef GAME
#define GAME

#include "./fases/MainMenu.hpp"
#include "./fases/Credits.hpp"
#include "./fases/escolhas/Selections.hpp"

#include <iostream>
using std::cout, std::cin, std::endl;

#include <vector>
using std::vector;

class Game {
  public:

    static void run() {
      SpriteBuffer tela = SpriteBuffer(200, 30);

			Jogador playerOne, playerTwo;
			Battle battle = Battle(playerOne, playerTwo);

			int resp = -1;

      MainMenu mainMenu = MainMenu("Tela inicial", tela);
      Credits credits = Credits("Tela de despedida", tela);
			Selections selections = Selections("Fase Geral para cadastrar os dados do Duelo", tela, battle);
			
			resp = mainMenu.run(tela);
			if (resp == Fase::END_GAME)
				credits.run(tela);
			else {
				resp = selections.run(tela);
				if (resp == Fase::END_GAME)
					credits.run(tela);
			}
    }

};

#endif