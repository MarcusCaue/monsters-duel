#include "./Battle.hpp"

Jogador& Battle::getFirstPlayer() const { return this->firstPlayer; }
Jogador& Battle::getSecondPlayer() const { return this->secondPlayer; }
int Battle::getIndexPlayerJogando() const { return this->quemEscolhendoNoTurno; }

void Battle::setFirstPlayer(const Jogador& player) { this->firstPlayer = player; }
void Battle::setSecondPlayer(const Jogador& player) { this->secondPlayer = player; }
void Battle::setIndexPlayerJogando(int turno) { this->quemEscolhendoNoTurno = turno; }