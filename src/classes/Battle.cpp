#include "./Battle.hpp"

Jogador* Battle::getFirstPlayer() const { return this->firstPlayer; }
Jogador* Battle::getSecondPlayer() const { return this->secondPlayer; }
int Battle::getIndexPlayerJogando() const { return this->quemEscolhendoNoTurno; }

void Battle::setFirstPlayer(const Jogador& player) { 
  Jogador novoPlayer = player;
  this->firstPlayer = &novoPlayer; 
}

void Battle::setSecondPlayer(const Jogador& player) {
  Jogador novoPlayer = player;
  this->secondPlayer = &novoPlayer; 
}

void Battle::setIndexPlayerJogando(int turno) { this->quemEscolhendoNoTurno = turno; }