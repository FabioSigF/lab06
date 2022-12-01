#include <stdio.h>

void main()
{
  /*5. Gerar e imprimir uma matriz de tamanho 10 x 10, onde seus elementos são de forma:
    A[i][j] = 2i + 7j - 2 se i < j;
      A[i][j] = 3i^2 - 1 se i = j;
      A[i][j] = 4i^3 - 5j^2 + 1 se i > j;
  */

  int mat[10][10], cont = 0;

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      if (i < j)
      {
        mat[i][j] = (2 * i) + (7 * j) - 2;
      }
      else if (i == j)
      {
        mat[i][j] = ((3 * i) * (3 * i)) - 1;
      }
      else if (i > j)
      {
        mat[i][j] = ((4 * i)*(4 * i)*(4 * i)) - ((5 * j) * (5 * j)) + 1;
      }
    }
  }

  for (int i = 0; i < 10; i++)
  {
    for (int j = 0; j < 10; j++)
    {
      printf("[%.5d]", mat[i][j]);
    }
    putchar('\n');
  }
}