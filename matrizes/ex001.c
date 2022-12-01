#include <stdio.h>

void main() {
    /*1.Leia uma matriz 4x4, conte e escreva quantos valores maiores que 10 ela possui.*/
    
    int mat[4][4], m10 = 0;
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("Digite o valor da posicao[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            
            if(mat[i][j] > 10)
                m10++;
        }
    }
    
    printf("A matriz possui %d valores maiores que 10.", m10);
}