#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  float dias, horasTrabalho, salarioHora, salario, acrescimo;
  printf("Digite a quantidade de dias trabalhados no m�s: ");
  scanf("%f", &dias);
  horasTrabalho = dias * 8;
  printf("Digite o valor da hora trabalhada: ");
  scanf("%f", &salarioHora);
  salario = salarioHora * horasTrabalho;
  acrescimo = salario * 1.5;

  if (dias <= 20)
    printf("O sal�rio � de: %2.f", salario);
  else
    printf("O sal�rio ter� um reajuste valendo: %2.f", acrescimo);

  return 0;
}



