#include <stdio.h>
#include <string.h>

int main()
{
    int nLivres = 0;
    float Prix[500];
    char Titre[50][50];
    char Auteur[50][50];
    int Quantite[500];
    char titreRecherche[50];
    char titreModifier[50];
    char titreSupprimer[50];
    int newQuantite;
    int choix, i;

    do
    {
        printf("\nMenu de gestion de la librairie :\n");
        printf("\n1 Ajouter un livre au stock. :\n");
        printf("\n2 Afficher tous les livres disponibles :\n");
        printf("\n3 Rechercher un livre par son titre:\n");
        printf("\n4 Mettre à jour la quantité d'un livre:\n");
        printf("\n5 Supprimer un livre du stock:\n");
        printf("\n6 Afficher le nombre total de livres en stock.\n");
        printf("Entrez votre choix : ");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            printf("Entrez le titre du livre : ");
            scanf(" %s", &Titre[nLivres]);
            printf("Entrez l'auteur du livre : ");
            scanf(" %s", &Auteur[nLivres]);
            printf("Entrez le prix du livre : ");
            scanf("%f", &Prix[nLivres]);
            printf("Entrez la quantité en stock : ");
            scanf("%d", &Quantite[nLivres]);
            nLivres++;
            printf("livre ajouter Avec succès.\n");
            break;

        case 2:
            if (nLivres == 0)
            {
                printf("Aucun livre disponible.\n");
            }
            else
            {
                for (i = 0; i < nLivres; i++)
                {
                    printf("Titre: %s, Auteur: %s, Prix: %.2f, Quantité: %d\n", Titre[i], Auteur[i], Prix[i], Quantite[i]);
                }
            }
            break;

        case 3:
            printf("Entrez le titre du livre à rechercher : ");
            scanf(" %s", titreRecherche);
            int trouve = 0;
            for (int i = 0; i < nLivres; i++)
            {
                if (strcmp(Titre[i], titreRecherche) == 0)
                {

                    if (trouve == 1)
                    {
                        printf("Livre trouvé - Titre: %s, Auteur: %s, Prix: %.2f, Quantité: %d\n", Titre[i], Auteur[i], Prix[i], Quantite[i]);
                    }
                    else
                    {
                        printf(" trouvé pas.\n");
                    }
                }
            }

            break;

        case 4:
            printf("Entrez le titre du livre qui ve modifier  : ");
            scanf("%s", titreRecherche);
            printf("entre le nombre de Quantite qui ve modifier");
            scanf("%d", &newQuantite);
            for (i = 0; i < nLivres; i++)
            {
                if (strcmp(Titre[i], titreRecherche) == 0)
                {
                    Quantite[i] = newQuantite;
                    printf("Quantité mise à jour pour Titre: %s, Auteur: %s, Prix: %.2f, Quantité: %d\n", Titre[i], Auteur[i], Prix[i], newQuantite);
                    break;
                }
                else
                {
                    printf("Aucun livre disponible.\n  ");
                }
            }
            break;

        case 5:
            printf("Entrez le titre du livre à supprimer  : ");
            scanf(" %s", titreSupprimer);
            int trouvee = 0;
            for (i = 0; i < nLivres; i++)
            {
                if (strcmp(Titre[i], titreSupprimer) == 0)
                {
                    trouvee=1;
                    for (int j = i; j < nLivres-1; j++){
                         //copy 
                        strcpy(Titre[j],Titre[j+1]);
                        strcpy(Auteur[j],Auteur[j+1]);
                        Prix[j],Prix[j+1];
                        Quantite[j],Quantite[j+1];
                    }nLivres--;
                    printf("le livre est Supprimer avec succès ");
                    break;
                }
            }
            if (!trouvee) {
                printf("Aucun livre disponible");
            }
            
            break;

        case 6:
            if (nLivres == 0)
            {
                printf("Aucun livre en stock.\n");
            }
            else
            {
                int total = 0;
                for (i = 0; i < nLivres; i++)
                {
                    total = total + Quantite[i];
                }
                printf("Nombre total de livres en stock : %d\n", total);
            }
            break;

        default:
            printf("Entrez votre choix \n");
            break;
        }
    } while (choix != 0);
    return 0;
}