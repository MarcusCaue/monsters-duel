-> Vou fazer uma simplificação das batalhas Pokémon dos Games Clássicos

-> Classes:
   - `Jogador`;  
   - `Monstro`, a partir da qual serão instanciadas os mascotes das casas de Hogwarts;
   - `Habilidade`, que terá uma classe filha chamada `Habilidade Especial`;
   - `Item`;

-> Jogador {
   - nome : string
   - monstro : Monstro
   - itens[4] : Item
}

-> Monstro {
   - especie : string <- { "Texugo", "Leão", "Corvo", "Serpente" }
   - nome : string
   - vida : int
   - atq : int
   - def : int
   - habilidades[4] : Habilidade
   - special : HabilidadeEspecial
}

-> Habilidade {
   - nome : string
   - desc : string
   
}