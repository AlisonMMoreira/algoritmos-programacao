/*
Crie um programa com uma função que receba um vetor e o seu tamanho por parâmetro e retorne a média dos elementos do vetor para o programa principal.
*/

#include <stdio.h>
#include <stdlib.h>
#define N 5

float funcao( int a[], int size )
{
  int i;
  float soma = 0;
  
  for ( i = 0; i < size; i++ )
    soma += a[i];
  return( soma / size );
}
int main()
{
  int a[N];
  int i;
  
  for ( i = 0; i < N; i++ )
    a[i] = i;
  printf("Resultado = %5.2f\n", funcao(a, N));
  system ("pause");
  return 0;
}
