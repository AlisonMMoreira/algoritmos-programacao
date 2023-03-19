//Faça um programa em C que receba três notas de um aluno, calcule e mostre a média aritmética entre elas.

#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>

int main(){
	float nota1, nota2, nota3, media;
	setlocale(LC_ALL,"Portuguese");
	printf("Digite a primeira nota do aluno(a): ");
	scanf("%f", &nota1);
	printf("Digite a segunda nota do aluno(a): ");
	scanf("%f", &nota2);
	printf("Digite a terceira e última nota do aluno(a): ");
	scanf("%f", &nota3);
	media = (nota1 + nota2 + nota3)/3;
	printf("%f A média final do aluno(a) foi:\n ", media);
	system ("pause");
	return 0;
}
