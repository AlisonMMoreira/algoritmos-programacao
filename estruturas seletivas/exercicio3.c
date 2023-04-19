/* custo para enviar um pacote por correio expresso � R$ 10,00 para at� um quilo e R$ 3,75 para cada meio quilo. Se o pacote pesar mais que 35 quilos, uma taxa de peso adicional de R$ 10,00 � adicionada ao custo. Nenhum pacote com mais de 50 quilos � aceito. Escreva um programa em C que aceite o peso de um pacote em quilos e calcule o custo de enviar o pacote ou n�o.*/

#include <stdio.h>
#include <locale.h>

int main() {
  float p, peso;
  printf("Digite o peso do pacote: ");
  scanf("%f", &peso);

  if(peso <= 1){
    printf("O custo para enviar o pacote �: R$10.00");
  }else if(peso > 1 && peso <= 35){
    p = (peso/2) * 3.75;
    printf("O custo para enviar o pacote �: R$ %.2f", p);
  }else if(peso > 35 && peso <= 50){
    p = ((peso/2) * 3.75) + 10;
    printf("O custo para enviar o pacote �: R$ %.2f", p);
  }else{
    printf("Nenhum pacote acima de 50kg � aceito!!");
  }
}
