#include <stdio.h>

int bolha (int *v)
{
    int repete, pos, aux, tamanho;
    tamanho = 7;
    
    for(repete = 0; repete < tamanho; repete++)
    {
        for(pos = 0; pos < tamanho -1; pos++)
        {
            if(v[pos] > v[pos +1])
            {
                aux = v[pos];
                v[pos] = v[pos +1];
                v[pos +1] = aux;
            }
        }
    }
    
printf("The trhee biggest numbers are :");
for(int i=4;i<7;i++){
    printf("%d \n",v[i]);
}
}


int main () {
int v[7],i;

printf("Enter seven numbers : ");
for(i=0;i<7;i++){
    scanf("%d",&v[i]);
}

bolha(v);

}
