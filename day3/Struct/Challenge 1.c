#include <stdio.h>

typedef struct
{
    char nom[10];
    char prenom[10];
    int age;
}personne ;

int main()
{
 personne P;
 printf("entre le nom de personne");
 scanf("%s",&P.nom);
 printf("entre le prenom de personne");
 scanf("%s",&P.prenom);
 printf("entre l'age de personne");
 scanf("%d",&P.age);

 printf("les information :%s %s %d",P.nom,P.prenom,P.age);


    return 0;
}