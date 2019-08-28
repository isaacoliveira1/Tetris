#include "tetris.h"    

void init(char matrix[ROWS][COLUMNS]){
            int i,j;
            for (i=0; i<ROWS; i++){
                for (j=0; j<COLUMNS; j++){
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

