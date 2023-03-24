//Faça um programa em C que receba o preço de um produto, calcule e mostre o preço reajustado, sabendo-se que este sofreu um aumento de 15%.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float produto, reajuste, novoPreco;
	printf("Digite o valor do produto que você queira comprar: \n");
	scanf("%f", &produto);
	reajuste = produto * 0.15;
	novoPreco = produto + reajuste;
	printf("O produto recebeu um reajuste de 15%%, ou seja, o preço subiu para: R$ %.2f\n", novoPreco);
	return 0;
}
