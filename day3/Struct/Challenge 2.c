#include <stdio.h>
#include<stdlib.h>
#include<string.h>


 typedef struct 
{
    char nom[10];
    char prenom[10];
    int note[3];
}etudient ;

int main()
{
    etudient t[100];
    int i, n;
    printf("entre les nombre de l'etudient\n");
    scanf("%d",&n);
    
    for (i = 0; i < n; i++)
    {
        printf("entre le nom de etudient %d\n",i+1);
        scanf("%s", &t[i].nom);
        printf("entre le prenom de etudient%d\n",i+1);
        scanf("%s", &t[i].prenom);
        printf("entre les note de etudient %d\n",i+1);
        for (int j = 0; j < 3; j++)
        {
            printf("entre les note %d\n",j+1);
            scanf("%d", &t[i].note[j]);
        }
        
    }
   printf("\nLes informations des etudiants:\n");
    for ( i = 0; i < n; i++)
    {
        printf(" %s %s \n", t[i].nom, t[i].prenom);
        for (int j = 0; j < 3; j++)
        {
            printf(" le %d note %d\n",j+1,t[i].note[j]);
        }
        
        

    }
    

    return 0;
}