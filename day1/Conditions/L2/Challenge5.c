
#include <stdio.h>
#include <math.h>

int main()
{
    int Budget,Destination,nbP;
    printf("entre le Budget");
    scanf("%d",&Budget);
    printf("entre la Destination (1 pour plage, 2 pour montagne, 3 pour ville)");
    scanf("%d",&Destination);
    printf("entre le Nombre de personnes");
    scanf("%d",&nbP);
    
    if(Destination ==1 && Budget >= 1000 && nbP > 2 ){
        printf("Les destinations recommandées est plage Voyage haut de gamme")
    }else if(Destination == 2 && Budget >= 500 && nbP <= 2 ){
        printf("Les destinations recommandées est Montagne Voyage moyen")
    } else if(Destination == 3 );
        printf("Les destinations recommandées est Ville")
    }
    return 0;
}