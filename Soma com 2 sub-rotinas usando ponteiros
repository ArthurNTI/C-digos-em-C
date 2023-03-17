#include <stdio.h>

int
subrotina_A_ex3 (int *A, int *B)
{
  return *A + *B;
}

int subrotina_B_ex3 (int *vetor){
    
  int A, B;
  int soma;
  A = *(vetor + 0) + *(vetor + 1);
  B = *(vetor + 2) + *(vetor + 3);
  soma = subrotina_A_ex3 (&A, &B);
  return soma;
}

void ex3 (){
    
  int vetor[4];
  int soma = 0;
  for (int i = 0; i < 4; i++)
    {
    printf ("Enter four integers : ");
    scanf ("%d", vetor + i);
    }
    soma = subrotina_B_ex3 (vetor);
    printf ("\n\nVector:");
    for (int i = 0; i < 4; i++)
    {
    printf ("[%d]", *(vetor + i));
    }
    printf ("\n\nsum: %d", soma);
}

int main(){
    ex3();
}
