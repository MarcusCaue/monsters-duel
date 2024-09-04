-> Link diagrama de classes: https://lucid.app/documents#/documents?folder_id=home

-> Quando um monstro usa um item, ele não consome energia. Somente habilidades

-> Classes:
   - `Jogador`;  
   - `Monstro`, a partir da qual serão instanciadas os mascotes das casas de Hogwarts;
   - `Habilidade`, que terá uma classe filha chamada `Habilidade Especial`;
   - `Item`;

- Jogador {
   - nome : string
   - monstro : Monstro
   - itens[4] : Item

   - usarItem(int indexItem) : void 
}

- Monstro {
   - especie : string <- { "Texugo", "Leão", "Corvo", "Serpente" }
   - nome : string
   - vida : int
   - atq : int
   - def : int
   - energia : int
   - habilidades[4] : Habilidade
   - special : HabilidadeEspecial

   - descansar() : void
   - usarHabilidade(int indiceHabilidade) : void
   - usarEspecial() : void
}

- Habilidade {
   - nome : string
   - desc : string
   - consumoEnergia : int

   - executar(Monstro& invocador, Monstro& paciente) : void
}

- HabilidadeEspecial : Habilidade { 
   - consumoEnergia : const int 
}

- Item {
   - nome : string
   - desc : string

   - aplicarEfeito(Monstro& paciente) : void
}