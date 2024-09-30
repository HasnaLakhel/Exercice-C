#include <stdio.h>
#include <math.h>

int main()
{
    int age,annee,Mtotal;
    printf("entre age");
    scanf("%d",&age);
    printf("entre Années de cotisation");
    scanf("%d",&annee);
    printf("Montant total épargné (en euros)");
    scanf("%d",&Mtotal);
    
    if(age >= 65 && annee>= 30 && Mtotal >= 100 000 ){
        printf(" Plan complet avec pension élevée")
    }else if(age >= 65 && annee>= 20 && Mtotal >= 50 000){
        printf("Plan partiel avec pension moyenne")
    } else if(age < 65 ans );
        printf(" Plan épargne non encore disponible")
    }
    
    
    return 0;
}