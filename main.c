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
        //Posição do personagem
        Bloco batata;
        batata.i = 0;
        batata.j = COLUMNS/2;
        batata.tipo = TIPO_I;
        batata.orientacao = ORIENTACAO_LEFT;
        batata.width = 5;
        batata.height = 1;

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
         printf ("%c Orientacao =(%d , %d) \n" ,219, batata.width, batata.height);
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
                case SetaD:  if(batata.j - (batata.width/2) > 0) batata.j--; break; //vai pra direita
                case D:
                 case d:
                case SetaE: if(batata.j + (batata.width/2) < (COLUMNS-1))batata.j++; break; //vai pra esquerda
              case TECLA_S:
              case TECLA_s: 
              case TECLA_ESPACO: // Vira o bloco
              if (batata.orientacao == ORIENTACAO_LEFT)batata.orientacao  = ORIENTACAO_UP;
              else  batata.orientacao++; 
                      int aux = batata.width;
                      batata.width = batata.height;
                      batata.height = aux;
                      if (batata.j < (batata.width/2))
                      batata.j = batata.width/2;
                      else if (batata.j > COLUMNS - (batata.width/2) -1)
                      batata.j = COLUMNS - batata.width/2 -1;

                      break;
              }
              

         }
        
       
system("pause");
return 0;

}