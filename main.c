/*

    Jogo de entreterimento tetris em C para consoles, para executar start .\tetris.exe
    Autor: Isaac Nicholas.
    Data: 28/08/2019.


*/
#include "tetris.h"
/*
    Parte principal do proagama responsavel por iniciar e chamar as funções criadas.

*/
int main (){
    char matrix[ROWS][COLUMNS];
    int posi, posj;
    posi = ROWS/2;
    posj = COLUMNS/2;
   
 
    system("cls");
     system("COLOR 9E");
    init(matrix);
       while (1)
    {      system("cls");
    system("COLOR E");

         matrix[posi][posj] =  '@';
         printMatrix(matrix);
         matrix[posi][posj] =  177;
         if (posj < COLUMNS) posj++;
         
    }

    system("pause");
    return 0;

}