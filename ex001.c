#include <stdio.h>

void showArray(int array[], int arrayLength);

int main()
{
  /*1. Faça um programa que possua um vetor denominado A que armazene 6 números inteiros. 
  O programa deve executar os seguintes passos:
  a) Atribua os seguintes valores a esse vetor: 1, 0, 5, -2, -5, 7.
  b) Armazene em uma variável inteira (simples) a soma entre os valores das posições A[0], A[1] e A[5] do vetor e mostre na tela esta soma.
  c) Modifique o vetor na posição 4, atribuindo a esta posição o valor 100.
  d) Mostre na tela cada valor do vetor A, um em cada linha.
  */

  int A[6] = {1, 0, 5, -2, -5, 7};
  int sum;

  sum = A[0] + A[1] + A[5];
  A[4] = 100;
  showArray(A, 6);
  printf("A soma dos vetores A[0], A[1] e A[5] foi: %d.", sum);
}

void showArray(int array[], int arrayLength)
{
  for (int i = 0; i < arrayLength; i++)
  {
    printf("O valor do A[%d] eh: %d\n", i, array[i]);
  }
}