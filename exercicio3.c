//Crie um fluxograma e um programa em C que receba o ano de nascimento de uma pessoa e o ano atual, calcule e mostre:
//a)	a idade dessa pessoa;
//b)	quantos anos ela terá em 2050.

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <locale.h>

int main(){
	int ano_nasci, ano_atual, idade_atual, idade_futura;
	setlocale(LC_ALL, "Portuguese");
	
	printf("Digite o ano de seu nascimento: \n");
	scanf("%i", &ano_nasci);
	printf("Digite o ano em que estamos: \n");
	scanf("%i", &ano_atual);
	idade_atual = (ano_atual - ano_nasci);
	idade_futura = (2050 - ano_nasci);
	printf("A sua idade atual é de: %i\n", idade_atual);
	printf("E em 2050 você terá essa idade: %i\n", idade_futura);
	system ("pause");
	return 0;
}
