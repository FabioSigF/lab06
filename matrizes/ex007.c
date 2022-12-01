#include <stdio.h>
#include <stdlib.h>

void main()
{
  /*7. Faça um programa para gerar automaticamente números entre 0 e 99 de uma cartela de bingo. Sabendo que cada cartela deverá conter 5 linhas de 5 números, gere estes dados de modo a não ter números repetidos dentro das cartelas. O programa deve exibir na tela a cartela gerada.
   */

  int mat[5][5], r;

  srand(time(NULL));
  for (int i = 0; i < 5; i++)
  {
    for (int j = 0; j < 5; j++)
    {
      r = rand() % 98 + 1;
      mat[i][j] = r;

      for (int k = 0; k < i; k++)
      {
        for (int l = 0; l < j; l++)
        {
          if(r == mat[k][l])
          {
            r = rand() % 98 + 1;
            mat[i][j] = r;
          }
        }
      }
      

    }
  }

  for (int i = 0; i < 5; i++)
  {
    putchar('\n');
    for (int j = 0; j < 5; j++)
    {
      printf("%.2d ", mat[i][j]);
    }
  }
}