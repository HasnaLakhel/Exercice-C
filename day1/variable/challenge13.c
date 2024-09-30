#include <stdio.h>

int main() {
    int nombre;

    // Demander à l'utilisateur d'entrer un nombre entier
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre);

    // Afficher la valeur hexadécimale
    printf("Valeur hexadécimale :%X\n", nombre);
    return 0;
}