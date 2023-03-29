/* Faça um programa em C que receba o salário base de um funcionário, calcule e mostre o seu salário a receber, sabendo-se que o funcionário 
tem gratificação de R$ 50 e paga imposto de 7% sobre o salário base. */

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	float salarioBase, salarioReceber, gratificacao, imposto;
	printf("Digite o salário base: ", &salarioBase);
	
	scanf("%f", &salarioBase);
	gratificacao = 50;
	imposto = salarioBase * 0.07;
	salarioReceber = salarioBase + gratificacao - imposto;
	
	printf("O salário a receber é de: %0.2f", salarioReceber);
	
}
