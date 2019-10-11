 /*

Jogo de entreterimento tetris em C para consoles, para executar start .\tetris.exe
Autor: Isaac Nicholas.
Data: 28/08/2019.
 */
#include "display.h"
#include "tetris.h"
#define DEBUG 1


/*
Parte principal do proagama responsavel por iniciar e chamar as funções criadas.

*/
int main (){
        int keypressed = 0;
        char matrix[ROWS][COLUMNS];
        Bloco batata;
        batata.i = 0;
        batata.j = COLUMNS/2;
        batata.tipo = TIPO_I;
        batata.orientacao = ORIENTACAO_LEFT;
        batata.width = 1;
        batata.height = 4;

        system("COLOR E4");               
         
        system("cls");
        init(matrix);
        
//Apagar o cursor da tela;
        ShowConsoleCursor(0);
        system("cls");
        
        while (keypressed != ESC){
         gotoxy (0,0);
         #if DEBUG == 1
         printf ( "%c = (%d, %d)\n" , 178, batata.i, batata.j);
         #endif

         //Posicionar no meio da matriz
         drawBar(matrix, batata, PIXEL);
         //Mostra matriz na tela
         printMatrix(matrix);
         //Apaga posição anterior.
         drawBar(matrix, batata, EMPTY);

         if (batata.i < ROWS-1) batata.i++;

         keypressed = 0;
         if(kbhit()) keypressed = getch();
        if (keypressed ==setas) keypressed = getch();
        switch (keypressed){
                case A: 
                case a: 
                case SetaD:  if(batata.j>0) batata.j--; break; //vai pra direita
                case D:
                 case d:
                case SetaE: if(batata.j<COLUMNS-1)batata.j++; break; //vai pra esquerda
              
              case TECLA_S:
              case TECLA_s: 
              case TECLA_ESPACO:
              if (batata.orientacao == ORIENTACAO_LEFT)
              {
              batata.orientacao  = ORIENTACAO_UP;
              }
              else { batata.orientacao++; }
              break;


         }
        }
       
system("pause");
return 0;

}