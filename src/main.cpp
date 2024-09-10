#include "./ASCII_Engine/Core/SpriteBase.hpp"
#include "./ASCII_Engine/Cores.hpp"
#include "./ASCII_Engine/Sprite.hpp"
#include "./ASCII_Engine/SpriteBuffer.hpp"
#include "./ASCII_Engine/TextSprite.hpp"
#include "./ASCII_Engine/ObjetoDeJogo.hpp"

#include <iostream>
#include <string>
using namespace std;

// Tela de seleção de monstro
/* for (Sprite &sp : sps) {
	system("clear");

	luff.update();
	corvo.update();
	leao.update();
	serp.update();

	// draw(linha, coluna)
	luff.draw(tela, 0, 0);
	corvo.draw(tela, 0, 110);
	leao.draw(tela, 2, 202);
	serp.draw(tela, 2, 293);

	cout << tela << endl;
	getline(cin, str);
} */

int main() {
	
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
			seta.moveUp()	;
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
	}

	return 0;
}