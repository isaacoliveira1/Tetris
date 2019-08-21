#include <stdio.h>
#include <stdlib.h>
#define COLUMNS 60
#define ROWS 25

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



int main (){
    char matrix[ROWS][COLUMNS];
    int posi;
    int posj;
    int poxf, poxj;
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
         if (posj < COLUMNS) posj ++;
    
    
    system("pause");
    return 0;
}