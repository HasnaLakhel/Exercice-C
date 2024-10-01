#include <stdio.h>
#include <string.h>

int main()
{
    char C1[100];
    char C2[100];
    printf("entre le chain de caracter");
    fgets(C1, sizeof(C1), stdin);
    printf("entre le chain de caracter");
    fgets(C2, sizeof(C2), stdin);
    strcat(C1, C2);
    printf("Concaténation de Chaînes %s",C1);

    return 0;
}