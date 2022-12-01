#include <stdio.h>

void main() {
    /*6. 6. Gere matriz 4 × 4 com valores no intervalo [1, 20]. Escreva um programa que transforme a matriz gerada numa matriz triangular inferior, ou seja, atribuindo zero a todos os elementos acima da diagonal principal. Imprima a matriz original e a matriz transformada.
    */
    
    int mat[4][4], contC = 4, cont = 1;
    for(int i = 0; i < 4; i++)
    {
        contC--;
        for(int j = 0; j < 4; j++)
        {
            if(j < contC)
            {
                mat[i][j] = 0;
            }
            else
            {
                mat[i][j] = cont;
            }
            printf("%d ", mat[i][j]);
        }
        cont++;
        putchar('\n');
    }
}