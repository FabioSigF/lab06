#include <stdlib.h>

int main()
{
  /*5. Faça um vetor de tamanho 50 preenchido com o seguinte valor: (i+5*i)%(i+1), sendo i a posição do elemento no vetor. Em seguida imprima o vetor na tela. */
  int vet[50];
  for (int i = 0; i < 50; i++)
  {
    vet[i] = (i + 5 * i) % (i + 1);
  }
  for (int i = 0; i < 50; i++)
  {
    printf("Posicao %d: %d\n", i, vet[i]);
  }
}