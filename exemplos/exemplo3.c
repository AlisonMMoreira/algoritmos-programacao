#include <stdio.h>
#include <locale.h>
#include <math.h>
int main()
{
	int x, y, soma;
	printf("Informe o primeiro valor:");
	scanf("%d", &x);
	printf("Informe o segundo valor:");
	scanf("%d", &y);
	soma = x + y;
	printf("A soma de %d e %d é: %d\n", x, y, soma);
	system ("pause");
	return 0;
}
