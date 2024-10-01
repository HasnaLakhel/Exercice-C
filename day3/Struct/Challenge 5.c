#include <stdio.h>
#include <string.h>
////structure ///
struct livre
{
    char titre[100];
    char auteur[100];
    int annee;
};

////fonction  ///
struct livre livre(char titre[100], char auteur[100], int annee;)
{
    struct livre liv;
    strcpy(liv.titre, titre);
    strcpy(liv.auteur, auteur);
    liv.annee = annee;
    return liv;
} 

int main()
{
    struct livre liv=liv("hhhh","hghghgg",2000);
    printf(" le titre de livre %s\n ",titre.liv);

    printf(" le auteur de livre %s\n ",auteur.liv);

    printf(" le annee de livre %d\n ",annee.liv);

    return 0;
}