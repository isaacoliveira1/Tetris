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
                            if (i == 0 || i == 24){
                            matrix[i][j] = 178;
                        } 
                        else if (j == 0 || j == 60){
                            matrix[i][j] = 178;
                           } else
                            matrix[i][j] = 177;
                            }
                    }
        }




        void printMatrix (char matrix[ROWS][COLUMNS]){
                    int i,j;
                    for (i=0; i<ROWS; i++){
                        for (j=0; j<COLUMNS; j++){
                        printf("%c", matrix[i][j]);

                        }
                        printf ("\n");
                    }
                }

