#include <stdio.h>

struct ponto{
    int x;
    int y;
    int z;
};

int main (void){

    struct ponto pontos[5];
    int cont;
    
    for (cont = 0; cont < 5; cont++){
        printf("Informe valores para x, y e z: \n");
        scanf("%d %d %d",&pontos[cont].x, &pontos[cont].y, &pontos[cont].z );
    }
    
    for (cont = 0; cont < 5; cont++){
        printf("ponto %d | x = %d \n",cont + 1,pontos[cont].x);
        printf("ponto %d | y = %d \n",cont + 1,pontos[cont].y);
        printf("ponto %d | z = %d \n",cont + 1,pontos[cont].z);

    }
}
