#include <stdio.h>

/*
  7. Faça um programa que receba 6 números inteiros e mostre:
  - Os números pares digitados;
  - A soma dos números pares digitados;
  - Os números ímpares digitados;
  - A quantidade de números ímpares digitados;
*/

void main()
{
  int nums[6], pares[6], impares[6];
  int j, k, sum;
  j = k = sum = 0;

  for (int i = 0; i < 6; i++)
  {
    printf("Digite o valor para a posicao %d: ", i);
    scanf("%d", &nums[i]);
    if(nums[i] % 2 == 0)
    {
      pares[j] = nums[i];
      sum += nums[i];
      j++;
    }
    else
    {
      impares[k] = nums[i];
      k++;
    }
  }

  printf("Os numeros pares digitados foram: ");
  for (int i = 0; i < j; i++)
  {
    printf("%d ", pares[i]);
  }
  putchar('\n');
  printf("A soma dos numeros pares foi: %d\n", sum);

  printf("Os numeros impares digitados foram: ");
  for (int i = 0; i < k; i++)
  {
    printf("%d ", impares[i]);
  }
  putchar('\n');
  printf("Ao todo, foram digitados %d numeros impares.", k);
  
}