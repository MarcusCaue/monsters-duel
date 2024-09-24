#ifndef MONSTER
#define MONSTER

#include "./Habilidade.hpp"
#include <vector>
using std::vector;

class Monster {
  private:
    string especie;
    string nome;
    unsigned int vida;
    unsigned int atq;
    unsigned int def;
    unsigned int energia;
    vector<Habilidade> habilidades;
    // HabilidadeEspecial special;

  public:
    Monster() : energia(100) {}
    Monster(string especie, string nome, unsigned int vida, unsigned int atq, unsigned int def) :
    especie(especie), nome(nome), vida(vida), atq(atq), def(def), energia(100) {}

    string getEspecie() const { return this->especie; }
    string getNome() const { return this->nome; }
    int getVida() const { return this->vida; }
    int getAtq() const { return this->atq; }
    int getDef() const { return this->def; }
    int getEnergia() const { return this->energia; }
    // vector<Habilidade> getHabilidades() const { return this->habilidades; }

    void setEspecie(string especie) { this->especie = especie; }
    void setNome(string nome) { this->nome = nome; }
    void setVida(unsigned int vida) { this->vida = vida; }
    void setAtq(unsigned int atq) { this->atq = atq; }
    void setDef(unsigned int def) { this->def = def; }
    void setEnergia(unsigned int energia) { this->energia = energia; }
    // void setHabilidades(const vector<Habilidade>& novasHabilidades) { this->habilidades = novasHabilidades; }
};

#endif