#include <stdio.h>

int main()
{
    int i,base,exposant,Resultat=1;
    printf("entre la base");
    scanf("%d",&base);
    printf("entre la exposant");
    scanf("%d",&exposant);
    for(i = 1 ; i <= exposant ; ++i){
        Resultat=Resultat*base;
    }
    printf("le résultat est  %d",Resultat);
  return 0;
}