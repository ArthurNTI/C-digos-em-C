#include <stdio.h>

int bolha (int *v)
{
    int repete, pos, aux, tamanho;
    tamanho = 6;
    
    for(repete = 0; repete < tamanho; repete++)
    {
        for(pos = 0; pos < tamanho -1; pos++)
        {
            if(v[pos] > v[pos +1])
            {
                aux = v[pos];
                v[pos] = v[pos +1];
                v[pos +1] = aux;
                printf("Trocou \n");
            }
        }
    }
    

printf("O menor numero é : %d \n",v[0]);
printf("O maior numero é : %d \n",v[5]);
   
}


int main () {
int v[6],i;

printf("Digite 6 números : ");
for(i=0;i<6;i++){
    scanf("%d",&v[i]);
}

bolha(v);

}

