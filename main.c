#include <locale.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>

#include "funcoes.h"
#define TAM 6

int main(void) {

  setlocale(LC_ALL, "Portuguse");

  srand(time(NULL));

  printf("O usuario deseja preencher a matriz ou deseja uma auto preenchida? "); // primeira mensagem para o usuario escolher

  int escolha; // usuario escolhe um valor (1 ou 2)
  scanf("%d", &escolha);

  // caso o usario deseja preencher a matriz (a opcao 1)

  int matriz[TAM][TAM];
  int i, j;

  if (escolha == 1) {

    for (i = 0; i < TAM; i++) {
      for (j = 0; j < TAM; j++) {
        scanf("%d", &matriz[i][j]);
      }
    }
  }

  if (escolha == 2) {

    for (i = 0; i < TAM; i++) {
      for (j = 0; j < TAM; j++) {
        matriz[i][j] = rand();
      }
    }
  }

  printf("Escolha uma opcao: (de 1 a 10) \n");

  // impressao menu de opcoes

  printf("Exibir a matriz - digite 1: \n");
  printf("Encontrar o maior valor de uma coluna - digite 2: \n");
  printf("Encontrar o menor valor da matriz - digite 3: \n");
  printf("Verificar se um valor existe na Matriz - digite 4: \n");
  printf("Realizar soma de coluna - digite 5: \n");
  printf("Realizar soma de linha - digite 6: \n");
  printf("Exibir elementos da diagona principal - digite 7: \n");
  printf("Verificar linhas em ordem crescente - digite 8: \n");
  printf("Procurar sequência de valores na ordem fornecida - digite 9:\n");
  printf("Finalizar - digite 10:  \n");

  int opcao;

  do {
  	
	scanf("%d", &opcao);
	
    switch (opcao) { // condicao menu de opcoes

    case 1: // exibir a matriz

      break;
    case 2: // perguntar qual coluna deseja encontra o maior valor (de 0 a 5)

      break;
    case 3: // encontrar e exibir o menor valor na tela

      break;
    case 4: // receber um valor do usuario e indicar se existe ou nao na matriz

      break;
    case 5: // o usuario ira digitar perguntar qual coluna (de 0 a 5) ele deseja
            // fazer a soma destes numeros; em seguida exibir a coluna com as
            // somas (pode ser um vetor - nao eh a matriz toda)

      break;
    case 6: // o usuario ira digitar perguntar qual coluna (de 0 a 5) ele deseja
            // fazer a soma destes numeros; em seguida exibir a coluna com as
            // somas (pode ser um vetor - nao eh a matriz toda)

      break;
    case 7: // exibir os elementos da matriz na diagonal principal

      break;
    case 8: // opcao que verificar se na matriz há numeros em ordem crescente

      break;
    case 9: //

      break;
    case 10: // finaliza o programa

      break;
    default: // caso o usario digite algo que esta fora do intervalo [1, 10]

      break;
    }
  } while (opcao != 10);

  return 0;
}
