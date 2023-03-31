/* Desenvolva um programa em C que receba o valor de um depósito e o valor da taxa de juros, calcule e mostre o valor do rendimento e o valor total depois do rendimento. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float deposito, taxaJuros, rendimento, valorTotal;
	printf("Digite a quantia que será depositada.\n");
	scanf("%f", &deposito);
	printf("Agora digite o valor da taxa de juros.\n");
	scanf("%f", &taxaJuros);
	rendimento = (deposito * taxaJuros)/100;
	valorTotal = rendimento + deposito;
	printf("O valor total é de: %2.2f ", valorTotal);
}
