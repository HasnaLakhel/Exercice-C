#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main()
{
   int choix, OP;
   do
   {
      printf("\ncalculatrice Menu:\n");
      printf("1 Addition  \n");
      printf("2 Soustraction \n");
      printf("3 Multiplication \n");
      printf("4 Division \n");
      printf("5 Moyenne \n");
      printf("6 Valeur absolue \n");
      printf("7 Exponentiation\n ");
      printf("8 Racine carrée \n");
      printf("9 quitter le programme\n");
      printf("choisir une opération à effectuer: ");
      scanf("%d", &choix);

      switch (choix)
      {
      case 1:
      {
         int n, i, nbr;
         float S = 0;
         printf("combien de nombres additionner ?\n");
         scanf("%d", &n);
         for (i = 0; i < n; i++)
         {
            printf("Entrez le nombre:\n");
            scanf("%d", &nbr);
            S = S + nbr;
         }
         printf("Le résultat est: %.2f\n", S);
         break;
      }

      case 2:
      {
         float a, b, R;
         printf("Entrez le premier nombre: ");
         scanf("%f", &a);
         printf("Entrez le deuxième nombre: ");
         scanf("%f", &b);
         R = a - b;
         printf("Le résultat est: %f\n", R);
         break;
      }

      case 3:
      {
         int n, i;
         float nbr, P = 1;
         printf("combien de nombres voulez-vous multiplier ?\n");
         scanf("%d", &n);
         for (i = 0; i < n; i++)
         {
            printf("Entrez le nombre:\n");
            scanf("%f", &nbr);
            P *= nbr;
         }
         printf("Le résultat est: %f\n", P);
         break;
      }

      case 4:
      {
         float a, b;
         printf("Entrez le premier nombre: ");
         scanf("%f", &a);
         printf("Entrez le deuxième nombre: ");
         scanf("%f", &b);
         if (b == 0)
         {
            printf("Erreur : Division par zéro impossible !\n");
         }
         else
         {
            printf("Le résultat de la division est: %f\n", a / b);
         }
         break;
      }

      case 5:
      {
         int n, i;
         float S = 0, nbr;
         printf("Combien de nombres pour calculer la moyenne ?\n");
         scanf("%d", &n);
         for (i = 0; i < n; i++)
         {
            printf("Entrez le nombre:\n");
            scanf("%f", &nbr);
            S += nbr;
         }
         printf("La moyenne est: %f\n", S / n);
         break;
      }

      case 6:
      {
         int n;
         printf("Entrez le nombre: ");
         scanf("%d", &n);
         printf("La valeur absolue de %d vaut %d.\n", n, abs(n));
         break;
      }
      case 7:
      {
         int i, base, exposant, Resultat = 1;
         printf("entre la base");
         scanf("%d", &base);
         printf("entre la exposant");
         scanf("%d", &exposant);
         for (i = 1; i <= exposant; ++i)
         {
            Resultat = Resultat * base;
         }
         printf("le résultat est  %d", Resultat);
         break;
      }

      case 8:
      {
         double n;
         printf("Entrez le nombre: ");
         scanf("%lf", &n);
         if (n > 0)
         {
            printf("La racine carrée de %f est: %f\n", n, sqrt(n));
         }
         else
         {
            printf("Erreur : entre nombre positif.\n");
         }
         break;
      }

      case 9:
         printf("Merci pour utilisé la calculatrice.\n");
         break;

      default:
         printf("Choix invalide.\n");
      }

   } while (choix != 9);

   return 0;
}
