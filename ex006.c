#include <stdio.h>

int main()
{
  /*6. Leia 10 números inteiros e armazene em um vetor. Em seguida escreva os elementos que são primos e suas respectivas posições no vetor.*/

  int val[10], prim, num;
  for (int i = 0; i < 10; i++)
  {
    printf("Digite o valor para a posicao %d: ", i);
    scanf("%d", &val[i]);
  }
  printf("Os elementos primos sao: \n");
  for (int i = 1; i <= 10; i++)
  {
    prim = 0;
    num = val[i - 1];

    if (num == 2)
      printf("%d\n", num);
      
    if (num % 2 != 0)
    {

      for (int j = 1; j <= num; j+=2)
      {
        if (num % j == 0)
        {
          prim++;
        }
      }
      if (prim == 2)
      {
        printf("%d\n", num);
      }
    }
  }
}
