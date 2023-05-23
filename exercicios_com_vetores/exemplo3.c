/*
Crie um programa que leia um vetor do tipo real de 10 posições e calcule e mostre a somatória de todos os elementos.
*/

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i;
    float soma, vet[10];
    soma = 0;
    printf("Informe 10 elementos em ponto flutuante: \n");
    for(i=0;i<10;i++)
    {
        printf("Elemento %d; ", i+1);
        scanf("%f",&soma);
        soma += vet[i];
    }
    printf("A somatória dos elementos lidos do vetor é: %f", soma);
    system("pause");
    return 0;
}
