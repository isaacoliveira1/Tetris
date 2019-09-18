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

/*

    Jogo de entreterimento tetris em C para consoles
    Autor: Isaac Nicholas.
    Data: 28/08/2019.


*/
void init(char matrix[ROWS][COLUMNS]); //Inicializa a matriz principal com espaços vazios e retorna o valor
void printMatrix (char matrix[ROWS][COLUMNS]); // Printa a matriz principal