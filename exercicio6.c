/* Crie um programa em C que receba o salário base de um funcionário, calcule e mostre o salário a receber, sabendo-se que o funcionário tem gratificação de 10% sobre o salário base e paga imposto de 8% sobre o salário base também.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	setlocale(LC_ALL, "Portuguese");
	float salarioBase, salarioReceber, gratificacao, imposto;
	printf("Digite o sálario base: ");
	scanf("%f", &salarioBase);
	gratificacao = salarioBase * 0.10;
	imposto = salarioBase - 0.8;
	salarioReceber = salarioBase + gratificacao - imposto;
	printf("O salário total a receber é de: %.2f", salarioReceber);
	system("pause");
	return 0;
}
