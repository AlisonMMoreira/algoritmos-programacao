//Faça um programa em C que leia dois valores e faça as quatro operaçãoes aritméticas básicas (+,-,*,/) com os dois valores, mostrando os resultados.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	int num1, num2, soma, subtracao, multiplicacao, divisao;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite o primeiro valor: ");
	scanf("%i", &num1);
	printf("Digite o segundo valor: ");
	scanf("%i", &num2);
	soma = num1 + num2;
	multiplicacao = num1 * num2;
	divisao = num1 / num2;
	if(num1 < num2)
		subtracao = num2 - num1;
	else
		subtracao = num1 - num2;
	if(num1 < num2)
		divisao = num2 / num1;
	else
		divisao = num1 / num2;
	printf("Se somados darão o seguinte resultado: %i\n", soma);	
	printf("Se subtraídos darão o seguinte resultado: %i\n", subtracao);
	printf("Se multiplicados darão: %i\n", multiplicacao);
	printf("Se divisao darão: %i\n", divisao);
}
