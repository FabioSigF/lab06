#include <stdio.h>

/*
8. Faça um programa que leia duas matrizes 2 × 2 com valores reais. Ofereça ao usuário um menu de opções:
a) somar as duas matrizes
b) subtrair a primeira matriz da segunda
c) adicionar uma constante às duas matrizes
d) imprimir as matrizes*/

void main()
{

  int pmat[2][2], smat[2][3], opt, calc, l, c;
  printf("1o Matriz\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("Digite o valor na posicao[%d][%d]: ", i, j);
      scanf("%d", &pmat[i][j]);
    }
  }
  printf("2o Matriz\n");
  for (int i = 0; i < 2; i++)
  {
    for (int j = 0; j < 2; j++)
    {
      printf("Digite o valor na posicao[%d][%d]: ", i, j);
      scanf("%d", &smat[i][j]);
    }
  }

  printf("Qual calculo voce quer fazer?\n  [1] Somar matrizes\n  [2] Subtrair a primeira matriz da segunda\n [3] Adicionar uma constante as duas matrizes:\n [4] Imprimir as matrizes\n R= ");
  scanf("%d", &opt);

  if (opt > 0 && opt < 5)
  {
    switch (opt)
    {
    case 1:
      calc = 0;
      for (int i = 0; i < 2; i++)
      {
        for (int j = 0; j < 2; j++)
        {
          calc += pmat[i][j] + smat[i][j];
        }
      }
      printf("A soma das matrizes foi: %d", calc);
      break;
    case 2:
      calc = 0;
      for (int i = 0; i < 2; i++)
      {
        for (int j = 0; j < 2; j++)
        {
          calc += smat[i][j] - pmat[i][j];
        }
      }
      printf("A subtracao das matrizes foi: %d", calc);
      break;
    case 3:
      calc = 0;
      printf("Qual matriz voce quer alterar? ex: 1 1 :");
      scanf("%d %d", &l, &c);
      printf("Qual sera o valor? ");
      scanf("%d", &calc);
      pmat[l][c] = calc;
      smat[l][c] = calc;
      printf("A primeira matriz [%d][%d] recebeu %d. A segunda matriz [%d][%d] recebeu %d.", l, c, calc, l, c, calc);
      break;
    case 4:
      printf("Primeira matriz:\n");
      for (int i = 0; i < 2; i++)
      {
        for (int j = 0; j < 2; j++)
        {
          printf("%d ", pmat[i][j]);
        }
        putchar('\n');
      }
      printf("Segunda matriz:\n");
      for (int i = 0; i < 2; i++)
      {
        for (int j = 0; j < 2; j++)
        {
          printf("%d ", smat[i][j]);
        }
        putchar('\n');
      }
      break;
    default:
      break;
    }
  }
  else
  {
    printf("Opcao invalida. FIM DO PROGRAMA!");
  }
}