/* Fa�a um programa em C que receba o sal�rio base de um funcion�rio, calcule e mostre o seu sal�rio a receber, sabendo-se que o funcion�rio 
tem gratifica��o de R$ 50 e paga imposto de 7% sobre o sal�rio base. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	float salarioBase, salarioReceber, gratificacao, imposto;
	printf("Digite o sal�rio base: ", &salarioBase);
	
	scanf("%f", &salarioBase);
	gratificacao = 50;
	imposto = salarioBase * 0.07;
	salarioReceber = salarioBase + gratificacao - imposto;
	
	printf("O sal�rio a receber � de: %0.2f", salarioReceber);
	
}
