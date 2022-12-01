#include <stdio.h>

void main() {
    /*3. Leia uma matriz 4x4, imprima a matriz e retorne a localização (linha e a coluna) do maior valor.*/
    
    int mat[4][4], maior, l, c;
    
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 4; j++)
        {
            printf("Digite o valor da posicao[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
            
            if(i == 0 && j == 0)
            {
                maior = mat[i][j];
                l = i;
                c = j;
            }
            else if (mat[i][j] > maior)
            {
                maior = mat[i][j];
                l = i;
                c = j;
            }
        }
    }
    printf("O maior numero digitado na matriz foi: %d, na linha %d e coluna %d.", maior, l, c);
    
}