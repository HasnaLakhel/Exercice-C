
#include <stdio.h>
#include <math.h>

int main()
{
    int Score,Anciennete,Recompenses;
    float bonus=0;
    printf("entre Score de performance");
    scanf("%d",&Score);
    printf("entre Ancienneté");
    scanf("%d",&Anciennete);
    printf("entre Récompenses reçues (0 pour aucune, 1 pour une, 2 pour deux ou plus)");
    scanf("%d",&Recompenses);
    if(Score >= 90 && Anciennete >=5 ){
        printf("Excellente\n");
    }else if(Score >= 75 && Anciennete >=3 ){
        printf("Bonne\n");
    }else if(Score >= 50 && Anciennete < 3 ){
        printf("Excellente\n");
    }else{
        printf("Insuffisante\n");
    }
    
    if(Recompenses == 1){
        bonus=bonus*10;
    }else if(Recompenses == 2){
        bonus=bonus*20;
    }
    printf("le récompenses est %f",bonus);

    return 0;
}