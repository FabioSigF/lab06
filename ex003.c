#include <stdio.h>

int main()
{
  /*3.Crie um programa que lê 6 valores inteiros e, em seguida, mostre na tela os valores lidos na ordem inversa*/
  int val[6];
  for (int i = 0; i < 6; i++)
  {
    printf("Digite o valor para a posicao %d: ", i);
    scanf("%d", &val[i]);
  }
  printf("\nOrdem Normal: [ ");
  for (int i = 0; i < 6; i++)
  {
    if (i != 5)
    {
      printf("%d, ", val[i]);
    }
    else
    {
      printf("%d ]\n", val[i]);
    }
  }
  printf("Ordem inversa: [ ");
  for (int i = 5; i >= 0; i--)
  {
    if (i != 0)
    {
      printf("%d, ", val[i]);
    }
    else
    {
      printf("%d ]", val[i]);
    }
  }
}