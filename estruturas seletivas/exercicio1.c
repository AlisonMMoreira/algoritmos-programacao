/* Faça um programa em C que leia 3 números e escreva o maior. */

#include <locale.h>
#include <stdio.h>

void main() {
  setlocale(LC_ALL, "Portuguese");
  float n1, n2, n3;

  printf("Digite tręs valores: ");
  scanf("%f", &n1);
  scanf("%f", &n2);
  scanf("%f", &n3);

  if (n1 > n2 && n1 > n3) {
    printf("%.2f é maior!", n1);
  }
  if (n1 < n2 && n2 > n3) {
    printf("%.2f é maoir!", n2);
  }
  if (n1 < n2 && n2 < n3) {
    printf("%.2f é maior!", n3);
  }
}
