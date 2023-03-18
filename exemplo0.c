#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <locale.h>
int main()
{
	float n,y,potenciacao;
	setlocale(LC_ALL,"Portuguese");
	
	printf("Digite um numero: ");
	scanf("%f",&n);
	printf("Digite o número de elevacao: ");
	scanf("%f",&y);
	potenciacao = pow(n,y);
	printf("O resultado é:",&potenciacao);
	system("pause");
	return 0;
}
