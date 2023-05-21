#include <locale.h>
#include <stdio.h>
#include <stdlib.h>

int main() {
  setlocale(LC_ALL, "Portuguese");
  float valorProduto, precoProduto, pagamento;
  printf("Digite o preço do produto: ");
  scanf("%f", &precoProduto);
  printf("Códigos de Pagamento: \n1. A vista em dinheiro ou cheque, recebe "
         "10%% de desconto \n2. A vista no cartão de crédito, recebe 5%% de "
         "desconto\n3. Em três vezes, preço normal de etiqueta mais jusros de "
         "10%\n");

  printf("Selecione a forma de pagamento: ");
  scanf("%f", &pagamento);

  if (pagamento == 1) {
    valorProduto = precoProduto - (precoProduto * 0.1);
    printf("O valor final do produto é: %.2f", valorProduto);
  } else if (pagamento == 2) {
    valorProduto = precoProduto - (precoProduto * 0.05);
    printf("O valor final do produto é: %.2f", valorProduto);
  } else if (pagamento == 3) {
    valorProduto = precoProduto;
    printf("O valor final do produto é: %.2f", valorProduto);
  } else {
    valorProduto = precoProduto + (precoProduto * 0.1);
    printf("O valor final do produto é: %.2f", valorProduto);
  }
  return 0;
}




