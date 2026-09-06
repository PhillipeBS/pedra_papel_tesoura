# Pedra, Papel e Tesoura

Jogo de Pedra, Papel e Tesoura desenvolvido em C para ser executado pelo terminal, permitindo ao usuário jogar contra uma escolha aleatória feita pelo computador.

## Funcionalidades

* Escolha entre Pedra, Papel e Tesoura
* Geração de uma jogada aleatória para o computador
* Verificação do vencedor
* Validação da opção informada
* Exibição das jogadas utilizando ASCII Art
* Opção para encerrar o jogo

## Requisitos

* Compilador C
* GCC ou outro compilador compatível

## Como executar

Compile a aplicação:

```bash
gcc main.c -o pedra-papel-tesoura
```

Execute:

```bash
./pedra-papel-tesoura
```

## Exemplo

```text
Pedra, Papel e Tesoura

Menu:
1 - Pedra
2 - Papel
3 - Tesoura
0 - Encerrar

> 1

Sua jogada:
    _______
---'   ____)
      (_____)
      (_____)
      (____)
---.__(___)

Jogada do computador:
     _______
---'    ____)____
           ______)
          _______)
         _______)
---.__________)

Você Venceu!
```

## Regras

* Pedra vence Tesoura
* Papel vence Pedra
* Tesoura vence Papel
* Jogadas iguais resultam em empate

## Estrutura

```text
.
└── main.c
```

## Conceitos utilizados

* Variáveis
* Estruturas condicionais (`if`, `else if`, `else`)
* Laço de repetição (`while`)
* Funções
* Entrada e saída de dados
* Geração de números aleatórios
* Validação de dados

## Tecnologias

* C
* stdio.h
* locale.h
* stdlib.h
* time.h

## Autor

Phillipe
