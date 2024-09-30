#include <stdio.h>
#include <math.h>

int main()
{
    int age,HM,type;
    printf("entre age");
    scanf("%d",&age);
    printf("Historique médical (0 pour aucun problème, 1 pour problème mineur, 2 pour problème majeur)");
    scanf("%d",&HM);
    printf("Type de couverture  (1 pour de base, 2 pour étendue)");
    scanf("%d",&type);
    
    if(age < 30 || (age >= 30 && HM == 0) ){
        printf(" Plan de base");
    }else if(age >= 30 && HM == 1){
        printf("Plan étendu");
    }
    if(HM >= 1 );
        printf(" Ajoutez une couverture supplémentaire pour les problèmes majeurs");
    
    return 0;
}