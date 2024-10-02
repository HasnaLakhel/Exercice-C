#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <regex.h>

struct Contact
{
    int id;
    char nom[500];
    char numero[15];
    char email[500];
};

struct Contact ALLcontacts[1000] = {
    {1, "A", "123455", "hasna@gmail.com"},
    {2, "BB", "2345432", "halima@gmail.com"},
    {3, "CCC", "1234321", "housam@gmail.com"},
    {4, "DDDD", "1276544", "MARYAM@gmail.com"},
    {5, "EEEEE", "3456543", "ABOUBAKER@gmail.com"},
    {6, "FFFFFF", "5678765", "KHADIJA@gmail.com"},
    {7, "GGGGGGG", "12323", "AHMED@gmail.com"},
    {8, "HHHHHHHHH", "23456", "MALIKA@gmail.com"},
    {9, "JJJJJJJJJJJ", "87654567", "JISSO@gmail.com"},
    {10, "KKKKKKKKKKKKKK", "123455", "MOMO@gmail.com"}};

int conCounter = 10;

int numeroValide(char numero[15])
{
    if (strlen(numero) == 0)
    {
        return 0;
    }
    for (int i = 0; i < strlen(numero); i++)
    {
        if (!isdigit(numero[i]))
        {
            return 0;
        }
    }
    return 1;
}



void Ajouter_simple()
{
    int numero;
    if (conCounter >= 1000)
    {
        printf("Le contacts est plein.\n");
        return;
    }
    struct Contact Contact_info;
    printf("entre le Nom\n");
    scanf("%s", Contact_info.nom);

    printf("Numéro de téléphone\n");
    scanf("%s", Contact_info.numero);
    if (numeroValide(Contact_info.numero) == 0)
    {
        printf("Numéro de téléphone pas valide\n");
        return;
    }

    printf("Adresse e-mail\n ");
    scanf("%s", Contact_info.email);


    ALLcontacts[conCounter] = Contact_info;
    printf("livre ajouter Avec succès.\n");
    Contact_info.id = conCounter++;
}

void Ajouter_multiple()
{
    int n;

    if (conCounter >= 1000)
    {
        printf("Le contacts est plein.\n");
    }
    struct Contact Contact_info;
    printf("combien de nombres des contact tu veux ajoute  ?");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        printf("ajoute le contact %d", i + 1);
        printf("entre le Nom\n");
        scanf("%s", Contact_info.nom);
        printf("Numéro de téléphone\n");
        scanf("%s", Contact_info.numero);
        if (numeroValide(Contact_info.numero) == 0)
        {
            printf("Numéro de téléphone pas valide\n");
            return;
        }

        printf("Adresse e-mail\n ");
        scanf("%s", Contact_info.email);
        ALLcontacts[conCounter] = Contact_info;
        printf("livre ajouter Avec succès.\n");
        Contact_info.id = conCounter++;
    }
}

void Ajouter_Contact()
{
    int Ajoute;

    do
    {
        printf("\n--------------------- Ajouter Contact ------------------------\n");
        printf("1 ajoute un contact simple\n");
        printf("2 ajoute un contact multiple\n");
        printf("3 retour le programme prancipal\n");
        printf("entre le choix\n");
        scanf("%d", &Ajoute);

        switch (Ajoute)
        {
        case 1:
            Ajouter_simple();
            break;
        case 2:
            Ajouter_multiple();
            break;
        case 3:
            break;
        default:
            break;
        }
    } while (Ajoute != 3);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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

void Manipulation()
{
    int ManipX;
    do
    {
        printf("----- Manipulation un Contact-------\n");
        printf(". Modifier un Contact \n");
        printf("2. Supprimer un Contact \n");
        printf("3 retour le programme prancipal\n");
        printf("entre le choix");
        scanf("%d", &ManipX);

        switch (ManipX)
        {
        case 1:
            Modifier_Contact();
            break;
        case 2:
            Supprimer_Contact();
            break;
        case 3:
            return;
            break;
        default:
            break;
        }

    } while (ManipX != 3);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

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
            printf("Le Nom %s\n", ALLcontacts[i].id);
            printf("Le Nom %s\n", ALLcontacts[i].nom);
            printf("Numéro %s\n", ALLcontacts[i].numero);
            printf("Adresse e-mail %s\n", ALLcontacts[i].email);
            printf("------------------------------------------\n");
        }
    }
}

void Afficher_ASC()
{
    struct Contact temp;
    struct Contact Contact_info;
    for (int i = 0; i < conCounter - 1; i++)
    {
        for (int j = i + 1; j < conCounter; j++)
        {
            if (strcmp(ALLcontacts[i].nom, ALLcontacts[j].nom) > 0)
            {

                temp = ALLcontacts[i];
                ALLcontacts[i] = ALLcontacts[j];
                ALLcontacts[j] = temp;
            }
        }
    }

    for (int i = 0; i < conCounter; i++)
    {
        printf("CONTACTS %d\n", i + 1);
        printf("Le Nom %s\n", ALLcontacts[i].id);
        printf("Le Nom %s\n", ALLcontacts[i].nom);
        printf("Numéro %s\n", ALLcontacts[i].numero);
        printf("Adresse e-mail %s\n", ALLcontacts[i].email);
        printf("------------------------------------------\n");
    }
}

void Afficher_DESC()
{
    struct Contact Contact_info;
    for (int i = 0; i < conCounter - 1; i++)
    {
        for (int j = i; j < conCounter; j++)
        {
            if (strcmp(ALLcontacts[i].nom, ALLcontacts[j].nom) < 0)
            {
                struct Contact temp;
                temp = ALLcontacts[i];
                ALLcontacts[i] = ALLcontacts[j];
                ALLcontacts[j] = temp;
            }
        }
    }

    for (int i = 0; i < conCounter; i++)
    {
        printf("CONTACTS %d\n", i + 1);
        printf("Le Nom %s\n", ALLcontacts[i].id);
        printf("Le Nom %s\n", ALLcontacts[i].nom);
        printf("Numéro %s\n", ALLcontacts[i].numero);
        printf("Adresse e-mail %s\n", ALLcontacts[i].email);
        printf("------------------------------------------\n");
    }
}

void Afficher()
{
    int AffichX;
    do
    {
        printf("-----Afficher Tous les Contacts-------\n");
        printf("1 tri ASC\n");
        printf("2 tri DCSC\n");
        printf("3 Afficher simple\n");
        printf("4 retour le programme prancipal\n");
        printf("entre le choix");
        scanf("%d", &AffichX);

        switch (AffichX)
        {
        case 1:
            Afficher_ASC();
            break;
        case 2:
            Afficher_DESC();
            break;
        case 3:
            Afficher_Contact();
            break;
        case 4:
            return;
            break;
        default:
            break;
        }

    } while (AffichX != 4);
}

/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////

void Rechercher_par_nom()
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
        if (strcmp(RechCont, ALLcontacts[i].nom) == 0)
        {
            trouve = 1;
            printf("CONTACTS %d\n");
            printf("Le Nom %s\n", ALLcontacts[i].id);
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

void Rechercher_par_id()
{
    int reche_id;
    printf("entre le id de contact");
    scanf("%d", &reche_id);
    int trouve = 0;
    if (conCounter == 0)
    {
        printf("Aucun contact disponible.\n");
    }
    for (int i = 0; i < conCounter; i++)
    {
        if (ALLcontacts[i].id == reche_id)
        {
            printf("les information de id= %d est :\n", reche_id);
            printf("Le Nom %s\n", ALLcontacts[i].id);
            printf("le Nom :%s\n", ALLcontacts[i].nom);
            printf("le numero :%s\n", ALLcontacts[i].numero);
            printf("le Nom :%s\n", ALLcontacts[i].email);
        }
    }
}

void Rechercher_Contact()
{
    int RecherX;
    do
    {
        printf("----- Rechercher un Contact-------\n");
        printf("1 Rechercher par nom\n");
        printf("2 Rechercher par id\n");
        printf("3 retour le programme prancipal\n");
        printf("entre le choix");
        scanf("%d", &RecherX);

        switch (RecherX)
        {
        case 1:
            Rechercher_par_nom();
            break;
        case 2:
            Rechercher_par_id();
            break;
        case 3:
            return;
            break;
        default:
            break;
        }

    } while (RecherX != 3);
}

int main()
{
    int choix;
    do
    {
        printf("\n---------Contacts Menu--------\n ");
        printf("1. Ajouter un Contact\n");
        printf("2. Manipulation un Contact \n");
        printf("3. Afficher Tous les Contacts\n");
        printf("4. Rechercher un Contact \n");
        printf("5. Statistiques \n");
        printf("6. Quitter le menu \n");
        printf("entre votre choix \n");
        scanf("%d", &choix);

        switch (choix)
        {
        case 1:
            Ajouter_Contact();
            break;
        case 2:
            Manipulation();
            break;
        case 3:
            Afficher();
            break;
        case 4:
            Rechercher_Contact();
            break;
        case 5:
            // Statistiques();
            break;
        case 6:
            break;
        default:
            break;
        }

    } while (choix != 6);

    return 0;
}