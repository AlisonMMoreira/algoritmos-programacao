#include <stdio.h>
int main()
{
	float x, y, area;
	printf("Informe o valor do lado menor: ");
	scanf("%f", &x);
	printf("Informe o valor do lado maior: ");
	scanf("%f", &y);
	area = x * y;
	printf("A �rea do ret�ngulo �: %6.2f\n", area);
	system ("pause");
	return 0;
}
