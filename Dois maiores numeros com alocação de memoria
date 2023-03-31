#include <stdio.h>
#include <stdlib.h>

void encontrarMaiores(int* vetor, int tamanho, int* maiores);

int main() {
  int tamanho;
  printf("Quantos numeros voce quer informar? ");
  scanf("%d", &tamanho);

  int* numeros = (int*) malloc(tamanho * sizeof(int));

  printf("Informe os numeros:\n");
  for (int i = 0; i < tamanho; i++) {
    scanf("%d", &numeros[i]);
  }

  int maiores[2];
  encontrarMaiores(numeros, tamanho, maiores);

  printf("\nValores do vetor original:\n");
  for (int i = 0; i < tamanho; i++) {
    printf("%d ", numeros[i]);
  }
  printf("\n");

  printf("Os dois maiores numeros sao: %d e %d\n", maiores[0], maiores[1]);

  free(numeros);

  return 0;
}

void encontrarMaiores(int* vetor, int tamanho, int* maiores) {
  if (tamanho == 1) {
    maiores[0] = vetor[0];
    maiores[1] = vetor[0];
    return;
  }
  
  if (vetor[0] >= vetor[1]) {
    maiores[0] = vetor[0];
    maiores[1] = vetor[1];
  } else {
    maiores[0] = vetor[1];
    maiores[1] = vetor[0];
  }

  for (int i = 2; i < tamanho; i++) {
    if (vetor[i] > maiores[0]) {
      maiores[1] = maiores[0];
      maiores[0] = vetor[i];
    } else if (vetor[i] > maiores[1]) {
      maiores[1] = vetor[i];
    }
  }
}

