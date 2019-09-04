 /*

Jogo de entreterimento tetris em C para consoles, para executar start .\tetris.exe
Autor: Isaac Nicholas.
Data: 28/08/2019.
 */
#include "display.h"
#include "tetris.h"
#include "tetris.c"
#include "display.c"
/*
Parte principal do proagama responsavel por iniciar e chamar as funções criadas.

*/
int main (){
        char matrix[ROWS][COLUMNS];
        int posi, posj;
        posi = 1;
        posj = 30;
                        
                    
        system("cls");
        system("COLOR 9E");
        init(matrix);
//Apagar o cursor da tela;
        ShowConsoleCursor(0);
        system("cls");
        while (1){
         gotoxy (0,0);
         system("COLOR E");
         matrix[posi][posj] =  '@';
         printMatrix(matrix);
         matrix[posi][posj] =  177;
         if (posi < ROWS) posi++;
                            
    }

system("pause");
return 0;

}