#include <stdio.h>

int Sub(int *Vetor1, int *Vetor2,int *ConcatenarVet){
    int i;
    for(i=0;i<3;i++){
        ConcatenarVet[i] = Vetor1[i];
    }
    
    for(i=3;i<6;i++){
        ConcatenarVet[i] = Vetor2[i];
    }
    
    for(i=0;i<6;i++){
        printf("%d",ConcatenarVet[i]);
    }
}

int main()
{
    int i = 0;
    int Vetor1[3], Vetor2[6];
    int ConcatenarVet[6];
    printf("Enter three values : ");
    for(i=0;i<3;i++){
        scanf("%d",&Vetor1[i]);
    }
    
    printf("Enter more three values : ");
    for(i=3;i<6;i++){
        scanf("%d",&Vetor2[i]);
    }
    
    Sub(Vetor1,Vetor2,ConcatenarVet);
}
