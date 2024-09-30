#include <stdio.h>

int main() {
    char nom [10] , prenom [10] , sexe [10] , adress [30], email[30];
    int age ;
    printf("entre le nom\n");
    scanf("%s",&nom);
    printf("entre le prenom\n");
    scanf("%s",&prenom);
    printf("entre le age\n");
    scanf("%d",&age);
    printf("entre le sexe\n");
    scanf("%s",&sexe);
    printf("entre le adress\n");
    scanf("%s",&adress);
    printf("entre le email\n");
    scanf("%s",&email);
    
    //affichage
    printf("le nom est :%s le prenom : %s\n l'age est: %d \n le sexe :%s\n le adress: %s\n le email est : %s\n",nom,prenom,age,sexe,adress,email);

    return 0;
}