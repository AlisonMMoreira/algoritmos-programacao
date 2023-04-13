#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    float amigo1, amigo2, amigo3, parte1, parte2, parte3, total, premio;
    
    printf("Digite o valor que o amigo 1 entrou: ");
    scanf("%f", &amigo1);
    printf("Digite o valor que o amigo 2 entrou: ");
    scanf("%f", &amigo2);
    printf("Digite o valor que o amigo 3 entrou: ");
    scanf("%f", &amigo3);
    printf("Digite o valor do prêmio: ");
    scanf("%f", &premio);

    total = amigo1 + amigo2 + amigo3;

    parte1 = (amigo1 / total) * premio;
    parte2 = (amigo2 / total) * premio;
    parte3 = (amigo3 / total) * premio;

    printf("O amigo 1 receberá %.2f\n", parte1);
    printf("O amigo 2 receberá %.2f\n", parte2);
    printf("O amigo 3 receberá %.2f\n", parte3);

    return 0;
}





