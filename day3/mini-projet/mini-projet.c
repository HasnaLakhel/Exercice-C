#include <stdio.h>
#include <string.h>
#include <ctype.h>

struct Contact
{
    char nom[500];
    char numero[10];
    char email[500];
};

struct Contact ALLcontacts[1000] = {{"hasna", "123455", "hasna@gmail.com"},
                                    {"halima", "2345432", "halima@gmail.com"},
                                    {"housam", "1234321", "housam@gmail.com"},
                                    {"MARYAM", "1276544", "MARYAM@gmail.com"},
                                    {"ABOUBAKER", "3456543", "ABOUBAKER@gmail.com"},
                                    {"KHADIJA", "5678765", "KHADIJA@gmail.com"},
                                    {"AHMED", "12323", "AHMED@gmail.com"},
                                    {"MALIKA", "23456", "MALIKA@gmail.com"},
                                    {"JISSO", "87654567", "JISSO@gmail.com"},
                                    {"MOMO", "123455", "MOMO@gmail.com"}};

int conCounter = 10;

int numeroValide(char numero[10])
{
    if (strlen(numero) == 0)
    {
        return 0;
    }
    for (int i = 0; i < strlen(numero); i++)
    {
        if (isdigit(numero[i]))
        {
            return 0;
        }
    }return 1;
}

void Ajouter_Contact()
{
    int numero;
    if (conCounter >= 1000)
    {
        printf("Le contacts est plein.\n");
        return;
    }
    struct Contact Contact_info;
    printf("entre le Nom\n");
    scanf("%s", &Contact_info.nom);
    printf("Numéro de téléphone\n");
    scanf("%s", &Contact_info.numero);
    if (numeroValide(Contact_info.numero) == 0)
    {
        printf("Numéro de téléphone pas valide\n");
        return;
    }

    printf("Adresse e-mail\n ");
    scanf("%s", &Contact_info.email);
    ALLcontacts[conCounter] = Contact_info;
    printf("livre ajouter Avec succès.\n");
    conCounter++;
}

void Modifier_Contact()
{
    struct Contact Contact_info;
    char ModifCont[100];
    printf("entre le nom de contact");
    scanf("%s", &ModifCont);
    if (conCounter == 0)
    {
        printf("Aucun contact disponible.\n");
    }
    int trouve = 0;
    for (int i = 0; i < conCounter; i++)
    {
        if (strcmp(ALLcontacts[i].nom, ModifCont) == 0)
        {
            trouve = 1;
            printf("entre Nouveau nom de contact\n");
            scanf("%s", ALLcontacts[i].nom);
            printf("entre Nouveau Numéro de téléphone de contact\n");
            scanf("%s", ALLcontacts[i].numero);
            printf("entre Nouveau Adresse e-mail de contact\n");
            scanf("%s", ALLcontacts[i].email);
        }
    }
    if (!trouve)
    {
        printf("contact trouvé pas.\n");
    }
}

void Supprimer_Contact()
{
    struct Contact Contact_info;
    char SuppriCont[1000];
    printf("entre le nom que vous souhaitez supprimer\n ");
    scanf("%s", &SuppriCont);
    int trouve = 0;
    for (int i = 0; i < conCounter; i++)
    {
        if (strcmp(ALLcontacts->nom, SuppriCont) == 0)
        {
            trouve = 1;
            for (int j = 0; j < conCounter - 1; j++)
            {
                strcpy(ALLcontacts[j].nom, ALLcontacts[j + 1].nom);
                strcpy(ALLcontacts[j].numero, ALLcontacts[j + 1].numero);
                strcpy(ALLcontacts[j].email, ALLcontacts[j + 1].email);
                printf("\nLe Contact Supprime avec succes!\n");
            }
            conCounter--;
            printf("le livre est Supprimer avec succès ");
            break;
        }
    }
    if (!trouve)
    {
        printf("contact trouvé pas.\n");
    }
}

void Afficher_Contact()
{
    struct Contact Contact_info;
    if (conCounter == 0)
    {
        printf("Aucun contact disponible.\n");
    }
    else
    {
        printf("la liste des contacts avec les détails\n");
        for (int i = 0; i < conCounter; i++)
        {
            printf("CONTACTS %d\n", i + 1);
            printf("Le Nom %s\n", ALLcontacts[i].nom);
            printf("Numéro %s\n", ALLcontacts[i].numero);
            printf("Adresse e-mail %s\n", ALLcontacts[i].email);
            printf("------------------------------------------\n");
        }
    }
}

void Rechercher_Contact()
{
    struct Contact Contact_info;
    char RechCont[100];
    printf("entre le Nom de contact\n");
    scanf("%s", RechCont);
    int trouve = 0;
    if (conCounter == 0)
    {
        printf("Aucun contact disponible.\n");
    }

    for (int i = 0; i < conCounter; i++)
    {
        if (strcmp(RechCont, ALLcontacts->nom) == 0)
        {
            trouve == 1;
            printf("CONTACTS %d\n");
            printf("Le Nom %s\n", ALLcontacts[i].nom);
            printf("Numéro %s\n", ALLcontacts[i].numero);
            printf("Adresse e-mail %s\n", ALLcontacts[i].email);
            printf("------------------------------------------\n");
        }
    }
    if (!trouve)
    {
        printf("contact trouvé pas.\n");
    }
}

int main()
{
    int choix;
    do
    {
        printf("\n---------Contacts Menu--------\n ");
        printf("1. Ajouter un Contact\n");
        printf("2. Modifier un Contact \n");
        printf("3. Supprimer un Contact \n");
        printf("4. Afficher Tous les Contacts\n");
        printf("5. Rechercher un Contact \n");
        printf("6. Quitter le menu \n");
        printf("entre votre choix \n");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            Ajouter_Contact();
            break;
        case 2:
            Modifier_Contact();
            break;
        case 3:
            Supprimer_Contact();
            break;
        case 4:
            Afficher_Contact();
            break;
        case 5:
            Rechercher_Contact();
            break;

        default:
            break;
        }

    } while (choix != 6);

    return 0;
}