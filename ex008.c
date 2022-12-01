#include <stdio.h>

/*
  8. Faça um programa para ler 10 números DIFERENTES a serem armazenados em um vetor. Os dados deverão ser armazenados no vetor na ordem que forem sendo lidos, sendo que caso o usuário digite um número que já foi digitado anteriormente, o programa deverá pedir para ele digitar outro número. Note que cada valor digitado pelo usuário deve ser pesquisado no vetor, verificando se ele existe entre os números que já foram fornecidos. Exibir na tela o vetor final que foi digitado.
*/
void main()
{
  int vet[10], i, num, unico;
  i = num = 0;
  unico = 1;

  do
  {
    printf("Digite o valor da posicao %d: ", i);
    scanf("%d", &num);

    if (i != 0)
    {
      for (int j = 0; j < i; j++)
      {
        if(num == vet[j])
          unico = 0;
        else
          unico = 1;
      }
    }
    else
    {
      vet[0] = num;
    }

  } while (i < 10);
}