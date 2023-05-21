/*
Faça um programa que carregue um vetor com 10 elementos inteiros, calcule e
mostre:
*/

#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int i, vet[10];

  // Leitura dos elementos do vetor
  printf("Informe 10 elementos inteiros:\n");
  for(i=0;i<10;i++)
    {
      printf("Digite o elemento %d: ", i+1);
      scanf("%d", &vet[i]);
    }
  //Impressão dos elementos do vetor
  printf("Os elementos lidos do vetor são: \n");
  for(i=0;i<10;i++)
    {
      printf(" |  %d  | \n", vet[i]);
    }
  return 0;
}