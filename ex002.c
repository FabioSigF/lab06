#include <stdio.h>

int main()
{
  /*2. Faça um programa que leia um vetor de 8 posições e, em seguida, leia também dois valores X e Y quaisquer correspondentes a duas posições no vetor. Ao final seu programa deverá escrever a soma dos valores encontrados nas respectivas posições X e Y. */

  int vet[8], x, y, sum;
  for (int i = 0; i < 8; i++)
  {
    printf("Digite o %do valor: ", i + 1);
    scanf("%d", &vet[i]);
  }
  printf("Agora, digite de 1 a 8 para o primeiro numero: ");
  scanf("%d", &x);
  printf("Digite de 1 a 8 para o segundo numero: ");
  scanf("%d", &y);

  if ((x < 1 || x > 8) || (y < 1 || y > 8))
  {
    printf("Valores invalidos.");
  }
  else
  {
    sum = vet[x - 1] + vet[y - 1];
    printf("A soma das posicoes %d e %d foi igual: %d", x, y, sum);
  }
}