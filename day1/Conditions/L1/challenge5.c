
#include <stdio.h>
#include <math.h>

int main()
{
    int annee,chiox,R;
    printf ("entre l'annee");
    scanf("%d",&annee);
    printf("entre le chiox : 1-Mois 2-Jours 3-Heures 4-Minutes -Secondes ");
    scanf("%d",&chiox);
    switch (chiox) {
  case 1:
        R= annee*12;
        printf("la annee en mois est:%d\n",R);
  break;
  case 2:
        R= annee*365;
        printf("la annee en Jours est:%d\n",R);
    break;
      case 3:
        R= annee*365*24;
        printf("la annee en mois est:%d\n",R);
    break;
      case 4:
        R= annee*365*24*60;
        printf("la annee en mois est:%d\n",R);
    break;
      case 5:
        R= annee*365*24*60*60;
        printf("la annee en mois est:%d\n",R);
    break;
  default:
    }

    
    return 0;
}