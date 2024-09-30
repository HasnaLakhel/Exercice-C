
#include <stdio.h>

int main()
{
    int annee,mois,jour;
    char *moisx[]= {"janvier", "février", "mars", "avril", "mai", "juin", "juillet", "août", "septembre", "octobre", "novembre", "décembre"};
    printf("entre le data J/M/A");
    scanf("%d %d %d",&annee,&mois,&jour);
    
    if(mois <= 1 && mois >= 12 ){
        printf("le mois est incorect");
    }else{
        printf("la formatage de c'est la date est :%d - %s - %d",jour,moisx[mois -1] ,annee);
    }

    return 0;
}