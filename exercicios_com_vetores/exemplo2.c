/*Crie um programa que leia um vetor inteiro de 10 posições e mostre-os em ordem inversa.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
int i, vet[10];

// Leitura dos elementos do vetor

printf (“Informe 10 elementos inteiros:\n”);
for (i=0 ; i<10 ; i++)
	{
		printf(“Elemento %d: “, i+1);
		scanf (“%d”, &vet[i]);
	}
// Impressão dos elementos do vetor em ordem inversa
printf(“Os elementos lidos do vetor na ordem inversa são: “);
for (i=9 ; i>=0 ; i--)
	{
		printf(“Elemento [%d]: %d “,i+1, vet[i]);
	}
	
system ("pause");
return 0;
}
