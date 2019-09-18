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
         
           int keypressed = 0;
        char matrix[ROWS][COLUMNS];
        int posi, posj;
        Re:
        posi = 1;
        posj = COLUMNS/2;
       
        system("COLOR E4");               
         
        system("cls");
        init(matrix);
        
//Apagar o cursor da tela;
        ShowConsoleCursor(0);
        system("cls");
        
        while (keypressed != ESC){
        
         gotoxy (0,0);

         matrix[posi][posj] =  '@';

         printMatrix(matrix);

         matrix[posi][posj] =  177;
         
         if (posi < ROWS-1) posi++;

      keypressed = 0;
         if(kbhit()) keypressed = getch();
        if (keypressed ==setas) keypressed = getch();
        switch (keypressed){
                case A: 
                case a: 
                case SetaD:  if(posj>0) posj--; break; //vai pra direita
                case D:
                 case d:
                case SetaE: if(posj<COLUMNS -1)posj++; break; //vai pra esquerda
              
         }
        }
       
system("pause");
return 0;

}