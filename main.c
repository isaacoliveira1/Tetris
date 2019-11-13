 /*

Jogo de entreterimento tetris em C para consoles, para executar start .\tetris.exe
Autor: Isaac Nicholas.
Data: 28/08/2019.
 */
#define DEBUG 1
#include "display.h"
#include "tetris.h"



/*
Parte principal do proagama responsavel por iniciar e chamar as funções criadas.

*/
int main (){
        int keypressed = 0;
        char matrix[ROWS][COLUMNS];
        //Posição do personagem
        Bloco batata;

        //Apagar o cursor da tela;
        ShowConsoleCursor(0);
        system("cls");


        initBar(&batata);
        system("COLOR E4"); 
        system("cls");             
         
        
        init(matrix);


        
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

        if (!collideBar(matrix, batata,UNCHECK_SIDE,NONE)){
                drawBar(matrix, batata, EMPTY);
         
                if (batata.i < (ROWS-1)) batata.i++;

        }
        else{
                initBar(&batata);
    
        }
         keypressed = 0;
         if(kbhit()) keypressed = getch();
        if (keypressed ==setas) keypressed = getch();
        switch (keypressed){
                case (int) 'A': 
                case (int) 'a': 
                case SetaD:  
                if(!collideBar(matrix,batata,CHECK_SIDE, SetaD)){
                batata.j--; break; //vai pra direita
                }
                case D:
                 case d:
                case SetaE: 
                if(!collideBar(matrix,batata,CHECK_SIDE,SetaE)){
                batata.j++; 
                break; //vai pra esquerda
                }
              case TECLA_S:
              case TECLA_s:  // Vira o bloco
              case TECLA_ESPACO: 
              rotate(&batata);
              break;
              
            break;
        
                }
        }
system("pause");
return 0;

}