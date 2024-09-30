
#include <stdio.h>
#include <math.h>

int main()
{
    int joursAccordes,joursutilises,Statut ,JR;
    printf("Nombre total de jours de congés accordés");
    scanf("%d",&joursAccordes);
    printf("Nombre de jours de congés utilisés");
    scanf("%d",&joursutilises);
    printf("Statut de l'employé (0 pour temps partiel, 1 pour temps plein)");
    scanf("%d",&Statut);
        if(Statut =0){
            JR= (joursAccordes/2) - joursutilises;
            printf("les jours restants est %d",JR);
        
       }else{
            JR= joursAccordes - joursutilises;
             printf("les jours restants est %d",JR);
       }
       if(joursutilises > joursAccordes ){
        printf("d'alerte");
    }
    
    
    return 0;
}