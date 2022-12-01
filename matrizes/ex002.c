#include <stdio.h>

void main() {
    /*2.Declare uma matriz 5x5. Preencha com 1 a diagonal principal e com 0 os demais elementos. Escreva ao final a matriz obtida.*/
    
    int mat[5][5], cont;
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(i != j)
            {
                mat[i][j] = 0;
            }
            else
            {   
                mat[i][j] = 1;
            }
            printf("%d ", mat[i][j]);
        }
        putchar('\n');
    }
    
}