        /*

            Jogo de entreterimento tetris em C para consoles, para executar start .\tetris.exe
            Autor: Isaac Nicholas.
            Data: 28/08/2019.


        */
#include "tetris.h"    
        /* 
            Aqui estão as funções para inicializar

        */

        void init(char matrix[ROWS][COLUMNS]){
                    int i,j;
                    for(i=0; i<ROWS; i++){
                        for(j=0; j<COLUMNS; j++){
                            /*
                            if (i == 0 || i == 24){
                            matrix[i][j] = 178;
                        } 
                        else if (j == 0 || j == 60){
                            matrix[i][j] = 178;
                           } else
                           */
                            matrix[i][j] = 177;
                            }
                    }
        }
/*
    Mostra o conteúdo da matriz principal na tela 
    do computador.
*/
void printMatrix(char matrix[ROWS][COLUMNS]){
    int i,j;

    printf("\t\t\t");
    //Linha de cima
    for(j=0; j<COLUMNS+2; j++){
        printf("\xB2");
    }
    printf("\n");

    //Matriz do jogo
    for(i=0; i<ROWS; i++){        
        printf("\t\t\t\xB2");
        for(j=0; j<COLUMNS; j++){
            printf("%c", matrix[i][j]);
        }
        printf("\xB2\n");
    }
    //Linha de baixo
    printf("\t\t\t");
     for(j=0; j<COLUMNS+2; j++){
          printf("\xB2");
     }
     printf ("\n");
}

void drawBar(char matrix[ROWS][COLUMNS], Bloco barra, int simbolo){
    switch (barra.orientacao){
        case ORIENTACAO_DOWN:
         case ORIENTACAO_UP:
        if (barra.i-3 >=0) matrix[barra.i-3][barra.j] =  simbolo;
        if (barra.i-2 >=0) matrix[barra.i-2][barra.j] =  simbolo;
        if (barra.i-1 >=0) matrix[barra.i-1][barra.j] =  simbolo;
        if (barra.i >=0) matrix[barra.i][barra.j] =  simbolo;
        matrix[barra.i][barra.j] = simbolo;
        break;
        case ORIENTACAO_RIGHT:
        case ORIENTACAO_LEFT: 
        if (barra.j-3 >=0) matrix[barra.i][barra.j-3] =  simbolo;
        if (barra.j-2 >=0) matrix[barra.i][barra.j-2] =  simbolo;
        if (barra.j-1 >=0) matrix[barra.i][barra.j-1] =  simbolo;
        if (barra.j >=0) matrix[barra.i][barra.j] =  simbolo;
        matrix[barra.i][barra.j] = simbolo;
        break;
        break;
     }
}