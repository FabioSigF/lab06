#include <stdio.h>

int main()
{
  /*4. Fazer um programa para ler 5 valores e, em seguida, mostrar a posição onde se encontram
 o maior e o menor valor*/
  int val[5], maior, menor, imaior, imenor;
  for (int i = 0; i < 5; i++)
  {
    printf("Digite o valor para a posicao %d: ", i);
    scanf("%d", &val[i]);
  }
  for (int i = 0; i < 5; i++)
  {
    if (i == 0)
    {
      maior = val[i];
      menor = val[i];
      imaior = i;
      imenor = i;
    }

    if (val[i] < menor)
    {
      menor = val[i];
      imenor = i;
    }

    if (val[i] > maior)
    {
      maior = val[i];
      imaior = i;
    }
  }

  printf("O maior valor digitado foi %d na posicao %d.\nO menor valor digitado foi %d na posicao %d", maior, imaior, menor, imenor);
}