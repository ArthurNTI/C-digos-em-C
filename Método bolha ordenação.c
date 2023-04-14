#include <stdio.h>
#include <stdbool.h>

int main ()
{
    int repete, pos, aux, tamanho;
    tamanho = 5;
    int vet[5];
    
    for (pos=0;pos<5;pos++){
    printf("Digite o %dº valor : ",pos + 1);
    scanf("%d",&vet[pos]);
    }
    
    for(repete = 0; repete < tamanho; repete++)
    {
        for(pos = 0; pos < tamanho -1; pos++)
        {
            if(vet[pos] > vet[pos +1])
            {
                aux = vet[pos];
                vet[pos] = vet[pos +1];
                vet[pos +1] = aux;
                printf("Trocou \n");
            }
        }
    }
    
    printf("Depois de ordenado ficou : \n");
    for (pos=0;pos<5;pos++){
    printf("%d° : %d \n",pos + 1,vet[pos]);
    }
