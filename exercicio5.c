//Desenvolva um programa em C que receba o preço de um produto e o percentual de desconto, calcule e mostre o valor do desconto e o novo preço do produto.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	float p_produto, p_desconto, desconto, n_p;
	setlocale(LC_ALL, "Portuguese");
	printf("Digite o valor do produto escolhido: ");
	scanf("%f", &p_produto);
	printf("Digite o percentual de desconto: ");
	scanf("%f", &p_desconto);
	desconto = (p_produto * p_desconto) / 100;
	n_p = (p_produto * p_desconto) / 100;
	printf("O valor total a pagar é de: %.2f: ", n_p);
	printf("O desconto é de: R$ %.2f\n", n_p);
}
