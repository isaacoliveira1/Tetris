#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define COLUMNS 60 // Configuração das dimensões da matriz principal do jogo
#define ROWS 25 // Configuração das dimensões da matriz principal do jogo
#define setas 224
#define A 65
#define D 68
#define a   97
#define d   100
#define ESC 27
#define SetaD 75
#define SetaE 77
#define TECLA_S 83
#define TECLA_s 115

//Orientação de peças
#define ORIENTACAO_UP 1
#define ORIENTACAO_RIGHT 2
#define ORIENTACAO_DOWN 3
#define ORIENTACAO_LEFT 4

//Tipos de peças
#define TIPO_L 1
#define TIPO_L_R 2 //L REVERSO
#define TIPO_T 3
#define TIPO_Z 4
#define TIPO_Z_R 5 //Z REVERSO
#define TIPO_O 6 // QUADRADO
#define TIPO_I 7
//Config Lay
#define PIXEL 219
#define EMPTY 177
#define TECLA_ESPACO 32


// Estrutura do tetris
typedef struct{
    int i; // posição nas linhas da matriz
    int j; // posição nas colunas da matriz
    int orientacao; // orientação da peça
    int tipo; // tipo da peça
    int width; // largura
    int height; // altura
}Bloco;

/*

    Jogo de entreterimento tetris em C para consoles
    Autor: Isaac Nicholas.
    Data: 28/08/2019.


*/
void init(char matrix[ROWS][COLUMNS]); //Inicializa a matriz principal com espaços vazios e retorna o valor
void printMatrix (char matrix[ROWS][COLUMNS]); // Printa a matriz principal

// Desenhar uma barra usando o simbolo do caracter ASCII passado por parametro

void drawBar(char matrix[ROWS][COLUMNS], Bloco barra, int simbolo); 
