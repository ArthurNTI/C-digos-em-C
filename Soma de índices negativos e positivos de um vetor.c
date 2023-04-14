#include <stdio.h>

int sum(int *v){
    int i,par,impar;
    
    for(i = 0; i < 8; i++){
        if(i%2==0){
            par = par+ v[i];
        }
        else{
            impar = impar +v[i];
        }
    }
    
printf("----------------------------------------------- \n");
printf("A soma dos indices pares do vetor foi de :%d \n",par);
printf("----------------------------------------------- \n");
printf("A soma dos indices impares do vetor foi de :%d \n",impar);
printf("----------------------------------------------- \n");

   
}


int main () {
int v[8],i;

printf("Digite 8 números : ");
for(i=0;i<8;i++){
    scanf("%d",&v[i]);
}

sum(v);

}
