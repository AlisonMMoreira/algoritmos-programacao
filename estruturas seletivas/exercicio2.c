/* As ma��s custam R$ 1,30 cada se forem compradas menos de uma d�zia, e R$ 1,00 se forem compradas pelo menos 12. Escreva um programa em C que leia o n�mero de ma��s compradas, calcule e escreva o custo total da compra. */

#include <stdio.h>
#include <locale.h>

void main() {
  setlocale(LC_ALL, "Portuguese");
  float m, ct;
  
  printf("Digite quantas ma��s ser�o compradas: ");
  scanf("%f", &m);

  if(m < 12){
    ct = m * 1.3;
  }else{
    printf("O custo total da compra �: %.2f", m);
  }
}
