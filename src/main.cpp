#include "./ASCII_Engine/Core/SpriteBase.hpp"
#include "./ASCII_Engine/TextSprite.hpp"
#include "./ASCII_Engine/Sprite.hpp"
#include "./ASCII_Engine/Cores.hpp"
#include "./ASCII_Engine/SpriteBuffer.hpp"

#include <iostream>
using namespace std;

int main() {
   
   Sprite luff = Sprite("./sprites/monsters/texugo/texugo.sp");
   Sprite corvo = Sprite("./sprites/monsters/corvo/corvo.sp");
   Sprite leao = Sprite("./sprites/monsters/leao/leao.sp");
   Sprite serp = Sprite("./sprites/monsters/serpente/serpente.sp");

   TextSprite msg = TextSprite("Monsters Duel - POO");

   cout << luff << endl;
   cout << corvo << endl;
   cout << leao << endl;
   cout << serp << endl;
   cout << msg << endl;

   return 0;
}