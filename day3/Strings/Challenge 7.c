#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char C[100];
    int i;
    printf("entre les une chaîne de caractères ");
    fgets(C,sizeof(C),stdin);

    
    for ( i = 0; i < strlen(C) != '\0'; i++)
    {
        printf("%c",tolower(C[i]));
    }
    
    return 0;
}