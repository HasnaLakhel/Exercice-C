
#include <stdio.h>
#include <math.h>

int main()
{
    int RA,SC,DP;
    printf("entre le Revenu annuel");
    scanf("%d",&RA);
    printf("entre Score de crédit");
    scanf("%d",&SC);
    printf("entre Durée du prêt");
    scanf("%d",&DP);
    if(RA >= 30000 && SC >= 700 && DP <= 10 ){
        printf("Éligible");
    }else if(RA >= 30000 && SC >= 650 && DP <= 15){
        printf(" Éligible avec conditions");
    }else{
        printf("Non éligible");
    }
    
    return 0;
}