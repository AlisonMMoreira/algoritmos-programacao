#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main(void) {
  setlocale(LC_ALL, "Portuguese");
  int ano;
  printf("Digite um ano: ");
  scanf("%d", &ano);
  if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
    printf("%d é um ano bissexto.\n", ano);
  } else {
    printf("%d não é ano bissexto.\n", ano);
  }
}

