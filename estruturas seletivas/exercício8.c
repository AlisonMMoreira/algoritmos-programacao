#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");

  float n1, n2, n3, n4;

  printf("Digite um n�mero: \n");
  scanf("%f", &n1);
  printf("Digite o segundo n�mero maior que o primeiro: \n");
  scanf("%f", &n2);
  if (n1 >= n2) {
    printf("Houve um erro de digita��o, recome a compila��o novamente.");
    return 0;
  }
  printf("Digite um terceiro n�mero maior que o primeiro e o segundo: ");
  scanf("%f", &n3);
  if (n3 <= n2) {
    printf("Houve um erro de digita��o, recome a compila��o novamente.");
    return 0;
  }
  printf("Digite um n�mero aleat�rio: \n");
  scanf("%f", &n4);

  if (n4 < n1) {
    printf("%.2f, %.2f, %.2f, %.2f \n", n3, n2, n1, n4);
  } else if (n4 > n1 && n4 < n2) {
    printf("%.2f, %.2f, %.2f, %.2f \n", n3, n2, n4, n1);
  } else if (n4 > n2 && n4 < n3) {
    printf("%.2f, %.2f, %.2f, %.2f \n", n3, n4, n2, n1);
  } else {
    printf("%.2f, %.2f, %.2f, %.2f \n", n4, n3, n2, n1);
  }

  return 0;
}



