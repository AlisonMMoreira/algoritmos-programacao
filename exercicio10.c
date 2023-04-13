#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
    float pes, polegadas, jardas, milhas;

    printf("Digite uma medida em pés: ");
    scanf("%f", &pes);
    polegadas = pes * 12;
    printf("%.2f pés correspondem a %.2f polegadas.\n", pes, polegadas);
    jardas = pes / 3;
    printf("%.2f pés correspondem a %.2f jardas.\n", pes, jardas);
    milhas = jardas / 1760;
    printf("%.2f pés correspondem a %.2f milhas.\n", pes, milhas);

    return 0;
}





