#include <stdio.h>
#include <string.h>


int main()
{
    char C[20];
    int comp=0;
    printf("entre le message");
    fgets(C,sizeof(C), stdin);
    while (C[comp] != '\0' && C[comp] != '\n')

    {
        comp ++;
    }
    
    printf("Longueur de la Chaîne %d",comp);

    return 0;
}