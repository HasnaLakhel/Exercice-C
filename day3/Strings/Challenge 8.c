#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char C[100];
    int i;
    printf("entre le message");
    fgets(C,sizeof(C),stdin);
    for ( i = 0; i < strlen(C); i++)
    {
        printf("%c",toupper(C[i]));
    }
    
    
    return 0;
}