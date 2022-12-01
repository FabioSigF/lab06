#include <stdio.h>

void main() {
    /*4. Leia uma matriz 5x5. Leia também um valor X. O programa deverá fazer uma busca desse valor na matriz e, no final, escrever a localização (linha e coluna) ou uma mensagem de "não encontrado".*/
    
    int mat[5][5], x, temX;
    
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            printf("Digite o valor da posicao[%d][%d]: ", i, j);
            scanf("%d", &mat[i][j]);
        }
    }
    
    printf("Digite um valor: ");
    scanf("%d", &x);
    
    for(int i = 0; i < 5; i++)
    {
        for(int j = 0; j < 5; j++)
        {
            if(mat[i][j] == x)
            {
                return printf("Valor %d encontrado na linha %d e coluna %d.", x, i, j);
            }
        }
    }
    printf("Valor nao encontrado na matriz.");
}