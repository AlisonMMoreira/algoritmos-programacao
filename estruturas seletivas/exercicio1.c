#include <locale.h>
#include <stdio.h>

void main() {
  setlocale(LC_ALL, "Portuguese");
  float n1, n2, n3;

  printf("Digite tr�s valores: ");
  scanf("%f", &n1);
  scanf("%f", &n2);
  scanf("%f", &n3);

  if (n1 > n2 && n1 > n3) {
    printf("%.2f � maior!", n1);
  }
  if (n1 < n2 && n2 > n3) {
    printf("%.2f � maoir!", n2);
  }
  if (n1 < n2 && n2 < n3) {
    printf("%.2f � maior!", n3);
  }
}
